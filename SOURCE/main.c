

#include <stdio.h>
#include <stdlib.h>
#include "canio.h"
#include "cannet.h"
#include "msg.h"
#include "controller.h"
/*
 * 
 */
int main(int argc, char** argv)
{
  //Test class Msg
  int i;
  Msg mFirstMsg;
  
  printf("Test msg:\n");
  mFirstMsg.setId(1234);
  printf("ID=%d\n",mFirstMsg.getId());
  mFirstMsg.setDlc(8);
  printf("DLC=%d\n",mFirstMsg.getDlc());
  mFirstMsg.setData(0,'T');
  mFirstMsg.setData(1,'h');
  mFirstMsg.setData(2,'i');
  mFirstMsg.setData(3,'s');
  mFirstMsg.setData(4,'W');
  mFirstMsg.setData(5,'o');
  mFirstMsg.setData(6,'r');
  mFirstMsg.setData(7,'k');
  printf("Data:\n");
  for(i=0;i<mFirstMsg.getDlc();i++)
    printf("%c",mFirstMsg.getData(i));
  printf("\nStatus=%d",mFirstMsg.getStatus());
  printf("\nTest error:");
  mFirstMsg.setData(8,'D');

  return (EXIT_SUCCESS);
}

