<<<<<<< HEAD
=======
/*
 * File:   main.cpp
 * Author: Ira
 *
 * Created on July 2, 2011, 12:59 AM
 */

>>>>>>> 2eacb6f8f27d6c7af85d9f7b5e8cdb7fde9b2216
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
<<<<<<< HEAD

=======
>>>>>>> 2eacb6f8f27d6c7af85d9f7b5e8cdb7fde9b2216
void MsgHandler(QtMsgType type,const char *msg)
{
    //do nothing
}

int main(int argc, char *argv[])
{
<<<<<<< HEAD
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

    return app.exec();
=======
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

   return app.exec();
>>>>>>> 2eacb6f8f27d6c7af85d9f7b5e8cdb7fde9b2216
}
