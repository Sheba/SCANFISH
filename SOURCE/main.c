

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
MsgQueue *m;

void *writing(void*arg)
{
  int i;
  MsgSuperviser *pointer;
  Msg msg_1(pointer);
  Msg *p;
  char *str;
  printf("\n Adress msg put\n");
  for(i=0;i<15;i++)
  {
    p=new Msg(pointer);
    sprintf(str,"Writing: %p",p);
    write(1,str,15);
    m->put(p); 
 }
}

void *reading(void*arg)
{
  Msg*p;
  char *str;
  int i;
  printf("WORK READING");
  for(i=0;i<15;i++)
  {
    p=m->get();
    printf("\n----->%p\n",p);  
   sprintf(str,"Writing: %p",p);
   write(1,str,15);
  }
}

int main(int argc, char** argv)
{
  pthread_t w_thread;
  pthread_t r_thread;

  pthread_create(&w_thread,NULL,writing,NULL);
  pthread_create(&r_thread,NULL,reading,NULL);


  return (EXIT_SUCCESS);
}


