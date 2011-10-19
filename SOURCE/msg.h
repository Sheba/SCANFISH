
#ifndef MSG_H
#define	MSG_H

#include <vector>
#include <pthread.h>
#include "sferror.h"
#include "sys/time.h" /* Linux only (Posix functions) */

#define STATUS_OK 0

class MsgSuperviser;

class Msg 
{
    
private:
    unsigned long id; // should be 32 bit
    unsigned int dlc;
    unsigned char data[8];
    int rtr; // remote transmission request flag
    int crc; // cyclic redundancy code
    int ide; // 
    int status;     //  any errors in frames? for the future use
    MsgSuperviser *sv; // looks for the Msg resources
    struct timeval timestamp;

public:
    Msg(MsgSuperviser *msv);
    // accessors
    int setID(unsigned long mid);
    unsigned long getID();
    int setDlc(unsigned int mdlc);
    unsigned int getDlc();
/***************************************/
    int setCrc(int nCrc);
    int getCrc();
    int setRtr(int nRtr);
    int getRtr();
    int setIde(int nIde);
    int getIde();
    int isRTR(); // if 1-remote frame 0- data frame 
    int isIDE(); // if 1- extended frame 0- standard frame
/***************************************/
    int setData(unsigned int num,unsigned char mdata);
    unsigned char getData(unsigned int num);
    int getStatus();
    void setStatus(int st);
    //	set this Msg container  free
    void setMsgFree();
    void fixTime();
    time_t getTimestampSec();
    int getTimestampMS();
};

class MsgSuperviser
{
    // mutex
    pthread_mutex_t mutex;
    // vector of free resources
    std::vector<Msg *> vfree;
    // vector of allocated resources
    std::vector<Msg *> valloc;

public:
    MsgSuperviser();
    ~MsgSuperviser();
    Msg *allocMsgContainer();
    void setFree(Msg *msg);
};

#endif	/* MSG_H */

