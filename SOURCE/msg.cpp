#include "msg.h"
#include <stdio.h>

Msg::Msg()
{
  id=0;
  dlc=0;
  status=0;
};

int Msg::setId(unsigned int mid)
{
  id=mid;
  return 0;
};

unsigned int  Msg::getId()
{
  return id;
};

int Msg::setDlc(unsigned int mdlc)
{
  dlc=mdlc;
  return 0;
};

unsigned int  Msg::getDlc()
{
  return dlc;
};

int Msg::setData(int num,unsigned char ndata)
{
  data[num]=ndata;
  return 0;
};

unsigned char Msg::getData(int num)
{
  return data[num];
};

int Msg::getStatus()
{
  return status;
};
