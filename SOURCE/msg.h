
#ifndef MSG_H
#define	MSG_H

#define STATUS_OK 0

class Msg
{
    unsigned int id; // should be 32 bit 
    unsigned int dlc;
    unsigned char data[8];
    int status;     //  Any errors in frames?
public:
    Msg();
    int setId(unsigned int mid);
    unsigned int getId();
    int setDlc(unsigned int mdlc);
    unsigned int getDlc();
    int setData(int num,unsigned char ndata);
    unsigned char getData(int num);
    int setStatus(int nstatus);
    int getStatus();

};


#endif	/* MSG_H */

