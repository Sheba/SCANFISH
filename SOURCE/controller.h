#ifndef CONTROLLER_H
#define	CONTROLLER_H

#include "canio.h"
#include "cannet.h"
#include "msg.h"
#include "canlistener.h"

/*
 *  Creates connections, manages table of nets, is the interface for I/O
 *
 */

class Controller
{
    
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

#endif	

