all: headers
	g++ -o sf main.c canio.o cannet.o msg.o controller.o -lpthread   -D_REENTRANT
headers: canio.h cannet.h msg.h controller.h
	g++ -c   canio.cpp cannet.cpp msg.cpp controller.cpp -lpthread -D_REENTRANT
clean:
	rm -f *.o


