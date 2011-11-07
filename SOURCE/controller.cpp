#include "controller.h"
<<<<<<< HEAD
=======
#include "Connection.h"
#include "MainWindow.h"
>>>>>>> 2eacb6f8f27d6c7af85d9f7b5e8cdb7fde9b2216

Controller *Controller::singleton = NULL;

Controller::Controller()
{
<<<<<<< HEAD
    //	for the future use
=======
    netCount=0;
	//	for the future use

>>>>>>> 2eacb6f8f27d6c7af85d9f7b5e8cdb7fde9b2216
}

Controller *Controller::getController()
{
<<<<<<< HEAD
    if(singleton==NULL)
    {
        singleton=new Controller();
    }
    return singleton;
=======
	if(singleton==NULL)
	{
		singleton=new Controller();
	}
	return singleton;
>>>>>>> 2eacb6f8f27d6c7af85d9f7b5e8cdb7fde9b2216
}

int Controller::connect(int bitrate,const char *interface,CanListener *lstn)
{
<<<<<<< HEAD
    // create low level IO class
    // TODO: CanIO implementation depends on type of driver
    // Created object will be deleted by cannet
    SocketCanIO *sc=new SocketCanIO(interface);
    // create cannet
    // TODO: add it to map and create network ID
    singleton->cannet= new CanNet(sc,lstn);
    //  threads start
    if(singleton->cannet->start()<0)
    {
        return -1;
    }
    // TODO: use bitrate
    // TODO: return network ID
    return 3;
}

int Controller::disconnect(int netid)
{
    //TODO: using map and netid find exact CanNet
    singleton->cannet->stop();
    delete singleton->cannet;
    return 0;
}

int Controller::send(Msg *msg,int netid)
{
    //TODO: using map and netid find exact CanNet
    singleton->cannet->write(msg);
    return 0;
}

int Controller::receive(Msg **msg,int netid)
{
    //TODO: using map and netid find exact CanNet
    singleton->cannet->read(msg);
    return 0;
}

Msg *Controller::allocMsg()
{
    return singleton->msv.allocMsgContainer();
}
=======
	// create low level IO class
	// TODO: CanIO implementation depends on type of driver
	// Created object will be deleted by cannet
	SocketCanIO *sc=new SocketCanIO(interface);
	// create cannet
	// TODO: add it to map and create network ID
        netTable::iterator it;
        netCount++;
        singleton->nettab.insert(std::pair<int,CanNet*>(netCount,new CanNet(sc,lstn)));
        if ((it=nettab.find(netCount))==nettab.end())
        {
            return -1;
        }
	//  threads start
        if(it->second->start()<0)
	{
		return -1;
	}
	// TODO: use bitrate
	// TODO: return network ID
	return it->first;
}

int    Controller::disconnect(int netid)
{
        CanNet *cannet;
        netTable::iterator it;
        if ((it=nettab.find(netid))==nettab.end())
        {
            return -1;
        }
//	//TODO: using map and netid find exact CanNet
	it->second->stop();
        cannet=it->second;
        nettab.erase(it);
	delete cannet;
        netCount--;
	return 0;
}

int    Controller::send(Msg *msg,int netid)
{
        netTable::iterator it;
        if ((it=nettab.find(netid))==nettab.end())
        {
            return -1;
        }
	//TODO: using map and netid find exact CanNet
	it->second->write(msg);
	return 0;
}

int    Controller::receive(Msg **msg,int netid)
{
        netTable::iterator it;
        if ((it=nettab.find(netid))==nettab.end())
        {
            return -1;
        }
	//TODO: using map and netid find exact CanNet
	it->second->read(msg);
	return 0;
}


Msg *Controller::allocMsg()
{
	return singleton->msv.allocMsgContainer();

}
>>>>>>> 2eacb6f8f27d6c7af85d9f7b5e8cdb7fde9b2216
