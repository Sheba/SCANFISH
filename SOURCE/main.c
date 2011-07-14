

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include "canio.h"
#include "cannet.h"
#include "msg.h"
#include "controller.h"

/*
 * 
 */
MsgQueue Queue;
MsgQueue *m;

void *writing(void*arg)
{
  int i;
  MsgSuperviser *pointer;
  MsgSuperviser *d;
  Msg msg_1(pointer);
  Msg *p;

  for(i=0;i<15;i++)
  {
    p=new Msg(pointer);
    printf("\n->%p",p);
    m->put(p);
    sleep(1); 
  }
}

void *reading(void*arg)
{
  Msg *p;
  int i;

  for(i=0;i<15;i++)
  {
    sleep(1);
    p=m->get();  
    printf("\n<-%p",p);
  }
}

int main(int argc, char** argv)
{
  pthread_t w_thread;
  pthread_t r_thread;
  m=&Queue;
  printf("Test pthread:\n");
  pthread_create(&w_thread,NULL,writing,NULL);
  pthread_create(&r_thread,NULL,reading,NULL);

  sleep(20);
  return (EXIT_SUCCESS);
}


