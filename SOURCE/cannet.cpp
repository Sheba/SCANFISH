#include "cannet.h"
#include<stdio.h>
#include <unistd.h>

<<<<<<< HEAD
/*******************************************************************************
*				CanNet
*******************************************************************************/

CanNet::CanNet(CanIO *mcanio,CanListener *mlstn)
{
    canio=mcanio;
    lstn=mlstn;
}

CanNet::~CanNet()
{
    delete canio;
=======


/*******************************************************************************
*				CanNet
*******************************************************************************/
 CanNet::CanNet(CanIO *mcanio,CanListener *mlstn)
{
	canio=mcanio;
	lstn=mlstn;	

}

 CanNet::~CanNet()
{
	delete canio;

>>>>>>> 2eacb6f8f27d6c7af85d9f7b5e8cdb7fde9b2216
}

int CanNet::start()
{
<<<<<<< HEAD
    if(canio->connect()!=0)
    {
	lstn->errorInNet("Socket error\n");
	return -1;
    }
    pthread_create(&listenerThread,NULL,CanNet::readingthread,this);
    pthread_create(&writerThread,NULL,CanNet::writingthread,this);
    return 0;
=======
	if(canio->connect()!=0)
	{
		lstn->errorInNet("Socket error\n");
		return -1;
	}
	pthread_create(&listenerThread,NULL,CanNet::readingthread,this);
	pthread_create(&writerThread,NULL,CanNet::writingthread,this);
	return 0;
>>>>>>> 2eacb6f8f27d6c7af85d9f7b5e8cdb7fde9b2216
}

int CanNet::stop()
{
<<<<<<< HEAD
    pthread_cancel(listenerThread);
    pthread_cancel(writerThread);
    canio->disconnect();
    return 0;
}

void *CanNet::readingthread(void *obj_ptr)
{	
    ((CanNet*)obj_ptr)->reading();
}

void *CanNet::writingthread(void *obj_ptr)
{
    ((CanNet*)obj_ptr)->writing();
=======
	pthread_cancel(listenerThread);
	pthread_cancel(writerThread);
	canio->disconnect();
	return 0;

}
void *CanNet::readingthread(void *obj_ptr)
{	
	((CanNet*)obj_ptr)->reading();
	

}
void *CanNet::writingthread(void *obj_ptr)
{
	((CanNet*)obj_ptr)->writing();
>>>>>>> 2eacb6f8f27d6c7af85d9f7b5e8cdb7fde9b2216
}

void CanNet::reading()
{
<<<<<<< HEAD
    Msg *msg;
    while(1)
    {
	canio->receive(&msg);
	rqueue.put(msg);
        // NOTIFY THE LISTENER
	// listener->notify();
        lstn->notify();
    }
    pthread_exit(NULL);
}

void CanNet::writing()
{
    Msg *msg;
    while(1)
    {
	msg=wqueue.get();
	//printf("There is smth in Queue");
	canio->send(msg);
    }
    pthread_exit(NULL);
}

int CanNet::write(Msg *msg)
{
    wqueue.put(msg);
    return 0;
}

int CanNet::read(Msg **msg)
{
    *msg=rqueue.get();
    return 0;
}

=======
	Msg *msg;
	while(1)
	{
		canio->receive(&msg);
		rqueue.put(msg);
	        // NOTIFY THE LISTENER
	        // listener->notify();
		lstn->notify();
	}
	pthread_exit(NULL);
}
void CanNet::writing()
{
	Msg *msg;
	while(1)
	{
		msg=wqueue.get();
		//printf("There is smth in Queue");
		canio->send(msg);
	}	
	pthread_exit(NULL);
}


int CanNet::write(Msg *msg)
{
	wqueue.put(msg);
	return 0;

}
int CanNet::read(Msg **msg)
{
	*msg=rqueue.get();
	return 0;

}


>>>>>>> 2eacb6f8f27d6c7af85d9f7b5e8cdb7fde9b2216
/*******************************************************************************
*				MsgQueue
*******************************************************************************/

<<<<<<< HEAD
MsgQueue::MsgQueue()
{
    sem_init(&semaph,0,1);
    sem_init(&s_empty,0,0);
=======






MsgQueue::MsgQueue()
{
  sem_init(&semaph,0,1);
  sem_init(&s_empty,0,0);
>>>>>>> 2eacb6f8f27d6c7af85d9f7b5e8cdb7fde9b2216
}

MsgQueue::~MsgQueue()
{
<<<<<<< HEAD
    sem_destroy(&semaph);
    sem_destroy(&s_empty);
=======
  sem_destroy(&semaph);
  sem_destroy(&s_empty);	
>>>>>>> 2eacb6f8f27d6c7af85d9f7b5e8cdb7fde9b2216
}

Msg* MsgQueue::get()
{
<<<<<<< HEAD
    Msg*p;

    sem_wait(&s_empty);
    sem_wait(&semaph);
    p=mQueue.front();
    mQueue.pop();
    sem_post(&semaph);
    return p;
=======
  Msg*p;

  sem_wait(&s_empty);
  sem_wait(&semaph);
  p=mQueue.front();
  mQueue.pop();
  sem_post(&semaph);
  return p;
>>>>>>> 2eacb6f8f27d6c7af85d9f7b5e8cdb7fde9b2216
}

int MsgQueue::put(Msg* msg)
{
<<<<<<< HEAD
    sem_wait(&semaph);
    mQueue.push(msg);
    sem_post(&s_empty);
    sem_post(&semaph);
    return 0;
}
=======
  sem_wait(&semaph); 
  mQueue.push(msg);
  sem_post(&s_empty);
  sem_post(&semaph);

  
  return 0;
}


>>>>>>> 2eacb6f8f27d6c7af85d9f7b5e8cdb7fde9b2216
