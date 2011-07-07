#include "cannet.h"

MsgQueue::MsgQueue()
{
 // sem_init(&semaph,0,0);
};

MsgQueue::~MsgQueue()
{
};

int MsgQueue::get(Msg* msg)
{
  *msg=*mQueue.front();
  mQueue.pop();
  return 0;
};

int MsgQueue::put(Msg* msg)
{
  mQueue.push(msg);
  return 0;
};

