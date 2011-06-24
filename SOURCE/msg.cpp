#include "msg.h"
#include <stdio.h>

Msg::Msg()
{
  id=0;
  dlc=0;
  status=STATUS_OK;
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
  if(num<8) 
  {
   data[num]=ndata;
   return 0;
  }
    else 
    {
      fprintf(stderr,"Error set! The maximum number of an element 7\n\n");
      return 1;
    }
};

unsigned char Msg::getData(int num)
{
  if(num<8) 
  {
   return data[num];
  }
    else 
    {
      fprintf(stderr,"Error get! The maximum number of an element 7\n\n");
      return 1;
    }
};


int Msg::setStatus(int nstatus)
{
  status=nstatus;
  return 0;
};

int Msg::getStatus()
{
  return status;
};
