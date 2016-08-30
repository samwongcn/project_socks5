.PHONY:all
all:ser cli
	@echo 'done'
ser:common.cpp common.h server.cpp transfer.cpp transfer.h
	g++ -o ser common.cpp server.cpp transfer.cpp -lpthread

cli:common.cpp common.h client.cpp transfer.cpp transfer.h
	g++ -o cli common.cpp client.cpp transfer.cpp -lpthread
clean:
	rm ser cli
