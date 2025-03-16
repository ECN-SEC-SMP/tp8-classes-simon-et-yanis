all: main.exe

main.exe: main.o animal.o lion.o loup.o ours.o pierre.o attaque.o plateau.o
	g++ -o main.exe main.o animal.o lion.o loup.o ours.o pierre.o attaque.o plateau.o

main.o: main.cpp
	g++ -c main.cpp 

animal.o: animal.cpp
	g++ -c animal.cpp 

lion.o: lion.cpp
	g++ -c lion.cpp

loup.o: loup.cpp
	g++ -c loup.cpp

ours.o: ours.cpp
	g++ -c ours.cpp

pierre.o: pierre.cpp
	g++ -c pierre.cpp

attaque.o: attaque.cpp
	g++ -c attaque.cpp

plateau.o: plateau.cpp
	g++ -c plateau.cpp