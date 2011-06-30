#include "cannet.h"
#include <stdio.h>

MsgQueue::MsgQueue(int size)
{
  queue=new Msg*[size];
  start=end=0;
};

MsgQueue::~MsgQueue()
{
  delete queue;
  printf("Delete queue\n"); 
};

int MsgQueue::get(Msg *msg)
{
  *msg=*queue[start];
  start++;
  return 0;
};

int MsgQueue::put(Msg *msg)
{
  queue[end]=msg;
  end++;
  return 0;
};
