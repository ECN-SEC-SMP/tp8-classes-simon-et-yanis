all: main.exe

main.exe: main.o animal.o lion.o loup.o ours.o pierre.o attaque.o plateau.o
	g++ -g -o main.exe main.o animal.o lion.o loup.o ours.o pierre.o attaque.o plateau.o

main.o: main.cpp
	g++ -g -c main.cpp 

animal.o: animal.cpp
	g++ -g -c animal.cpp 

lion.o: lion.cpp
	g++ -g -c lion.cpp

loup.o: loup.cpp
	g++ -g -c loup.cpp

ours.o: ours.cpp
	g++ -g -c ours.cpp

pierre.o: pierre.cpp
	g++ -g -c pierre.cpp

attaque.o: attaque.cpp
	g++ -g -c attaque.cpp

plateau.o: plateau.cpp
	g++ -g -c plateau.cpp