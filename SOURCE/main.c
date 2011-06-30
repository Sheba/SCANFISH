

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
  Msg mTwoMsg;
  Msg mThreeMsg;
  Msg m1;
  Msg m2;
  Msg m3;
  MsgQueue WriteQueue(10); 

  printf("Test msg:\n");
  mFirstMsg.setId(1234);
  mTwoMsg.setId(4321);
  mTwoMsg.setId(6666);
  printf("1.ID=%d\n",mFirstMsg.getId());
  printf("2.ID=%d\n",mTwoMsg.getId());
  printf("3.ID=%d\n",mThreeMsg.getId());

  mFirstMsg.setDlc(8);
  mTwoMsg.setDlc(8);
  mThreeMsg.setDlc(8);
  printf("1.DLC=%d\n",mFirstMsg.getDlc());
  printf("2.DLC=%d\n",mFirstMsg.getDlc());
  printf("3.DLC=%d\n",mFirstMsg.getDlc());
  
  mFirstMsg.setStatus(STATUS_OK);
  mTwoMsg.setStatus(STATUS_OK);
  mThreeMsg.setStatus(STATUS_OK);
  printf("\n1.Status=%d",mFirstMsg.getStatus());
  printf("\n2.Status=%d",mTwoMsg.getStatus());
  printf("\n3.Status=%d",mThreeMsg.getStatus());

  mFirstMsg.setData(8,'D');
  mFirstMsg.getData(10);

  mFirstMsg.setData(0,'T');
  mFirstMsg.setData(1,'h');
  mFirstMsg.setData(2,'i');
  mFirstMsg.setData(3,'s');
  mFirstMsg.setData(4,'W');
  mFirstMsg.setData(5,'o');
  mFirstMsg.setData(6,'r');
  mFirstMsg.setData(7,'k');
  mTwoMsg.setData(0,'H');
  mTwoMsg.setData(1,'E');
  mTwoMsg.setData(2,'L');
  mTwoMsg.setData(3,'L');
  mTwoMsg.setData(4,'O');
  mTwoMsg.setData(5,'!');
  mTwoMsg.setData(6,'!');
  mTwoMsg.setData(7,'!');
  mThreeMsg.setData(0,'W');
  mThreeMsg.setData(1,'o');
  mThreeMsg.setData(2,'w');
  mThreeMsg.setData(3,'!');
  mThreeMsg.setData(4,'W');
  mThreeMsg.setData(5,'o');
  mThreeMsg.setData(6,'r');
  mThreeMsg.setData(7,'k');

  printf("\nData_1:\n");
  for(i=0;i<mFirstMsg.getDlc();i++)
    printf("%c",mFirstMsg.getData(i));

  printf("\nData_2:\n");
  for(i=0;i<mTwoMsg.getDlc();i++)
    printf("%c",mTwoMsg.getData(i));

  printf("\nData_3:\n"); 
  for(i=0;i<mThreeMsg.getDlc();i++)
    printf("%c",mThreeMsg.getData(i));
  
  printf("\n");
  printf("-----------------------------------\n");

  WriteQueue.put(&mFirstMsg);
  WriteQueue.put(&mTwoMsg);
  WriteQueue.put(&mThreeMsg);
  WriteQueue.get(&m1);
  WriteQueue.get(&m2);
  WriteQueue.get(&m3);
  printf("----> Read Queue");

  printf("\nData_1:\n");
  for(i=0;i<m1.getDlc();i++)
    printf("%c",m1.getData(i));

  printf("\nData_2:\n");
  for(i=0;i<m2.getDlc();i++)
    printf("%c",m2.getData(i));

  printf("\nData_3:\n");
  for(i=0;i<m3.getDlc();i++)
    printf("%c",m3.getData(i));

  printf("\n");
  printf("-----------------------------------\n");
  return (EXIT_SUCCESS);
}

