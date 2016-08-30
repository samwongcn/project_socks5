#ifndef TRANSFER_H_
#define TRANSFER_H_

struct TParam{
	int in;
	int out;
	pthread_t bro;
};
void *transfer(void *p);
#endif
