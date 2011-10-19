#include "msg.h"
#include <stdio.h>

/*******************************************************************************
*				class MsgSuperviser
*******************************************************************************/

MsgSuperviser::MsgSuperviser()
{
    pthread_mutex_init(&mutex,NULL);
}

MsgSuperviser::~MsgSuperviser()
{
    // free all allocated resources
    unsigned int i;

    for(i=0;i<valloc.size();i++)
        delete valloc[i];

    pthread_mutex_destroy(&mutex);
}

Msg *MsgSuperviser::allocMsgContainer()
{
    Msg *ptr;
    int size;
    // mutex down
    pthread_mutex_lock(&mutex);
    size=vfree.size();
    if(size>0)
    {
        // we can take one of free containers
	ptr=vfree[size-1];
	vfree.pop_back();
    }
    else
    {
        // we should allocate new container
	ptr= new Msg(this);
	// add container to the allocated resources
	valloc.push_back(ptr);
    }
    // mutex up
    pthread_mutex_unlock(&mutex);
    return ptr;
}

void MsgSuperviser::setFree(Msg *msg)
{
    Msg *ptr=msg;
    // mutex down
    pthread_mutex_lock(&mutex);
    vfree.push_back(ptr);
    // mutex up
    pthread_mutex_unlock(&mutex);
}


/*******************************************************************************
*				class Msg
*******************************************************************************/


Msg::Msg(MsgSuperviser *msv)
{
    // Msg knows its superviser
    sv=msv;
}


int Msg::setID(unsigned long mid)
{
    if(mid>0x1FFFFFFF)
    {
        return WRONG_ID;
    }
    id=mid;
    setRtr(id & 1);
    setIde(id & 524288);
    return 0;
}

unsigned long Msg::getID()
{
    return id;
}

int Msg::setDlc(unsigned int mdlc)
{
    if(mdlc>8)
    {
        return WRONG_DLC;
    }
    dlc=mdlc;
    return 0;
}

unsigned int Msg::getDlc()
{
    return dlc;
}

int Msg::setMask(unsigned long nMask)
{
    mask=nMask;
    return 0;
}

unsigned long Msg::getMask()
{
    return mask;
}

int Msg::setCrc(int nCrc)
{
    crc=nCrc;
    return 0;
}

int Msg::getCrc()
{
    return crc;
}

int Msg::setRtr(int nRtr)
{
    rtr=nRtr;
    return 0;
}

int Msg::getRtr()
{
    return rtr;
}

int Msg::setIde(int nIde)
{
    ide=nIde;
    return 0;
}

int Msg::getCrc()
{
    return ide;
}

int Msg::isRTR()
{
    if(getRtr()) 
        return 1;
    else
        return 0;
}

int Msg::isIDE()
{
    if(getIde()) 
        return 1;
    else
        return 0;
}

int Msg::setData(unsigned int num,unsigned char mdata)
{
    if(num>7)
    {
        return -1;
    }

    data[num]=mdata;
    return 0;
}

unsigned char Msg::getData(unsigned int num)
{
    if(num>7)
    {
        return -1;
    }
	
    return data[num];
}

int Msg::getStatus()
{
    return status;
}

void Msg::setStatus(int st)
{
    status=st;
}

void Msg::setMsgFree()
{
    sv->setFree(this);
}

void Msg::fixTime()
{
    // we don't need time zone
    gettimeofday(&timestamp,NULL);
}

time_t Msg::getTimestampSec()
{
    return timestamp.tv_sec;
}

int Msg::getTimestampMS()
{
    return timestamp.tv_usec;
}
