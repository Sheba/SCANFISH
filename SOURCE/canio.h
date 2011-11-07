#ifndef CANIO_H
#define	CANIO_H

#include "msg.h"
#include "sferror.h"

#define INTERFACE_NAME_SIZE 15

class CanIO
{

protected:
    int bitrate;
    char name[INTERFACE_NAME_SIZE];
    MsgSuperviser msv;
<<<<<<< HEAD
    
public:
    CanIO(int bitrate,const char *interface);
    virtual int connect()=0;
    virtual int disconnect()=0;
    virtual int send(Msg *msg)=0;
    virtual int receive(Msg **msg)=0;
=======
public:
    CanIO(int bitrate,const char *interface);
    virtual   int connect()=0;
    virtual   int disconnect()=0;
    virtual   int send(Msg *msg)=0;
    virtual   int receive(Msg **msg)=0;

>>>>>>> 2eacb6f8f27d6c7af85d9f7b5e8cdb7fde9b2216
};

class SocketCanIO : public CanIO
{

private:
<<<<<<< HEAD
    int sdw;	// socket descriptor write
    int sdr;	// socket descriptor read

=======
	int sdw;	// socket descriptor write
	int sdr;	// socket descriptor read
>>>>>>> 2eacb6f8f27d6c7af85d9f7b5e8cdb7fde9b2216
public:
    SocketCanIO(const char *name);
    int connect();
    int disconnect();
    int send(Msg *msg);
    int receive(Msg **msg); 

};

#endif	/* CANIO_H */

