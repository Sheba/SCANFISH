#ifndef CONTROLLER_H
#define	CONTROLLER_H

<<<<<<< HEAD
=======
#include <map>
#include <algorithm>

>>>>>>> 2eacb6f8f27d6c7af85d9f7b5e8cdb7fde9b2216
#include "canio.h"
#include "cannet.h"
#include "msg.h"
#include "canlistener.h"
<<<<<<< HEAD
=======


>>>>>>> 2eacb6f8f27d6c7af85d9f7b5e8cdb7fde9b2216

/*
 *  Creates connections, manages table of nets, is the interface for I/O
 *
 */

class Controller
{
<<<<<<< HEAD
    
private:
    CanNet *cannet; // should be replaced with map with several CanNet
    MsgSuperviser msv; // for msg allocation
    static Controller *singleton; // for Singleton template
    Controller();

public:
    // connect() creates new Net and couples it with I/O class, returns NetID
    static Controller *getController();
    int connect(int bitrate,const char *interface, CanListener *lstn);
    int disconnect(int netid);// destroys Net
    int send(Msg *msg,int netid);      // is used by GUI to send frames
    int receive(Msg **msg,int netid);   // is used by GUI to receive frames
    Msg *allocMsg(); // all Msg objects must be created with this method!!!
};

=======

private:
    MsgSuperviser msv; // for msg allocation
	static Controller *singleton; // for Singleton template

private:
    Controller();
public:
// connect() creates new Net and couples it with I/O class, returns NetID
static Controller *getController();
int    connect(int bitrate,const char *interface, CanListener *lstn);
int    disconnect(int netid);// destroys Net
int    send(Msg *msg,int netid);      // is used by GUI to send frames
int    receive(Msg **msg,int netid);   // is used by GUI to receive frames
Msg *allocMsg(); // all Msg objects must be created with this method!!!

typedef std::map <int,CanNet*> netTable;
netTable nettab;
int netCount;
int contrNum;

};

>>>>>>> 2eacb6f8f27d6c7af85d9f7b5e8cdb7fde9b2216
#endif	

