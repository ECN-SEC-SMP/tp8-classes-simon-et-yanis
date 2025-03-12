all: main.exe

main.exe: main.o animal.o lion.o loup.o ours.o pierre.o
	gcc -o main.exe main.o animal.o lion.o

main.o:
	gcc -c main.cpp 

animal.o:
	gcc -c animal.cpp 

lion.o:
	gcc -c lion.cpp

loup.o:
	gcc -c loup.cpp

ours.o:
	gcc -c ours.cpp

pierre.o:
	gcc -c pierre.cpp