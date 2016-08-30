#ifndef COMMON_H_
#define COMMON_H_

#pragma pack(push)
#pragma pack(1)
struct SKReq
{
	char ver;
	char n;
};

struct SKRep
{
	char ver;
	char m;
}; 

struct AddrReq{
	//VER|CMD|RSV|ATYP|DST.ADDR|DST.PORT|
	char ver;
	char cmd;
	char rsv;
	char atype;
};

struct AddrRep{
	//VER|REP|RSV|ATYP|BND.ADDR|BND.PORT
	char ver;
	char cmd;
	char rsv;
	char atype;
	int addr;
	short port;
};

#pragma pack(pop)

int recv_n(int sock,char*buf,int len);

int send_n(int sock,char*buf,int len);

void enx(char *data,int len);

#endif
