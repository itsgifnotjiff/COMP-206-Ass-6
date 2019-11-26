# Student Name : Yordan Radev
# Student ID   : 260 744 314

bank: main.o ssv.o linked.o
	gcc -o bank main.o ssv.o linked.o
main.o: main.c definitions.h
	gcc -c main.c
ssv.o: ssv.c definitions.h
	gcc -c ssv.c
linked.o: linked.c Account.h definitions.h
	gcc -c linked.c
