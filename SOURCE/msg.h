
#ifndef MSG_H
#define	MSG_H

#include <vector>
#include <pthread.h>
#include "sferror.h"
#include "sys/time.h" /* Linux only (Posix functions) */

#define STATUS_OK 0

/* valid bits in CAN ID for frame formats*/
#define CAN_SFF_MASK 0x000007FFU /* standard frame */
#define CAN_EFF_MASK 0x1FFFFFFFU /* extended frame */
#define CAN_ERR_MASK 0x1FFFFFFFU /* omit EFF, RTR, ERR flags */

class MsgSuperviser;

class Msg 
{
    
private:
    unsigned long id; // should be 32 bit
    unsigned int dlc;
    unsigned long mask;
    unsigned char data[8];
    int rtr; // remote transmission request flag
    int crc; // cyclic redundancy code
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
    int setMask(unsigned long mask);
    unsigned long getMask();
    int setCrc(int nCrc);
    int getCrc();
    int setRtr(int nRtr);
    int getRtr();
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

