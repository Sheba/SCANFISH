
#include <QtGui/QApplication>
#include <QWidget>
#include <QLabel>
#include <QHeaderView>
#include <QMainWindow>
#include <QMenu>
#include <QMenuBar>
#include <QAction>
#include "MainWindow.h"
#include "controller.h"

int TestMsg()
{
  /*test*/
   MsgSuperviser* m;
   Msg p(m);
   unsigned long indif;

   indif=24;
   p.setID(indif);
   p.setRtrFlag(1);
   p.setErrorFlag(0);
   p.setExtendedFlag(1);

   printf("\n1). ID: %x\n",p.getID());
   if(p.getID()&CAN_EFF_FLAG) printf("\n1.Extended FRAME,");
   else printf("\n1.Standard FRAME,");
   printf("  ExtendedFlag=%d\n",p.getExtendedFlag());
   if(p.getID()&CAN_RTR_FLAG) printf("2.Remote frame,");
   else printf("2.Data frame,");
   printf("  RtrFlag=%d\n",p.getRtrFlag());
   if(p.getID()&CAN_ERR_FLAG) printf("2.Error frame,");
   else printf("2.Not Error frame,");
   printf("  ErrorFlag=%d\n",p.getErrorFlag());
   printf("Id is real: %d\n",p.getRealID());
   printf("------------------------------------------------\n");

   indif=13;
   p.setID(indif);
   p.setRtrFlag(0);
   p.setErrorFlag(0);
   p.setExtendedFlag(0);

   printf("\n2). ID: %x\n",p.getID());
   if(p.getID()&CAN_EFF_FLAG) printf("\n1.Extended FRAME,");
   else printf("\n1.Standard FRAME,");
   printf("  ExtendedFlag=%d\n",p.getExtendedFlag());
   if(p.getID()&CAN_RTR_FLAG) printf("2.Remote frame,");
   else printf("2.Data frame,");
   printf("  RtrFlag=%d\n",p.getRtrFlag());
   if(p.getID()&CAN_ERR_FLAG) printf("2.Error frame,");
   else printf("2.Not Error frame,");
   printf("  ErrorFlag=%d\n",p.getErrorFlag());
   printf("Id is real: %d\n",p.getRealID());
   printf("------------------------------------------------\n");

   indif=255;
   p.setID(indif|CAN_EFF_FLAG|CAN_ERR_FLAG);

   printf("\n3). ID: %x\n",p.getID());
   if(p.getID()&CAN_EFF_FLAG) printf("\n1.Extended FRAME,");
   else printf("\n1.Standard FRAME,");
   printf("  ExtendedFlag=%d\n",p.getExtendedFlag());
   if(p.getID()&CAN_RTR_FLAG) printf("2.Remote frame,");
   else printf("2.Data frame,");
   printf("  RtrFlag=%d\n",p.getRtrFlag());
   if(p.getID()&CAN_ERR_FLAG) printf("2.Error frame,");
   else printf("2.Not Error frame,");
   printf("  ErrorFlag=%d\n",p.getErrorFlag());
   printf("Id is real: %d\n",p.getRealID());
   printf("------------------------------------------------\n");

}

void MsgHandler(QtMsgType type,const char *msg)
{
    //do nothing
}

int main(int argc, char *argv[])
{
   qInstallMsgHandler(MsgHandler);
   QApplication app(argc,argv);
   Controller *Con;
   Con=Controller::getController();
 
  
   MainWindow *MainWin=new MainWindow(NULL,Con);

   QMainWindow mw(0);
   mw.setWindowTitle("scanfish");
   mw.setCentralWidget(MainWin);
   QMenuBar *mbar=mw.menuBar();
   QMenu *menu=new QMenu("Menu");
   menu->addAction("About",MainWin,SLOT(showCredits()));
   menu->addAction("Quit",&app,SLOT(quit()));
   mbar->addMenu(menu);

   mw.show();

   TestMsg();
   return app.exec();
}
