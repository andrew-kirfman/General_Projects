# --------------------------------------------------------------------------- #
# Developer: Andrew Kirfman                                                   #
# Project Neural Network                                                      #
#                                                                             #
# File: ./Makefile                                                            # 
# Modification Date: 5/15/16                                                  #
# --------------------------------------------------------------------------- # 

CC=g++
STD=-std=c++14
CFLAGS=-O3 -g -Wall
OBJECTS=main.o neural_network.o neuron.o path.o


all: main.o neural_network.o neuron.o path.o 
	$(CC) $(CFLAGS) $(STD) $(OBJECTS) -o neural_network

main.o: main.cpp
	$(CC) $(CFLAGS) $(STD) -c main.cpp

neural_network.o: neural_network.cpp neural_network.h
	$(CC) $(CFLAGS) $(STD) -c neural_network.cpp neural_network.h

neuron.o: neuron.cpp neuron.h
	$(CC) $(CFLAGS) $(STD) -c neuron.cpp neuron.h 

path.o: path.cpp path.h
	$(CC) $(CFLAGS) $(STD) -c path.cpp path.h

clean:
	rm -rf *.o 2>&1 > /dev/null
	rm -f neural_network 2>&1 > /dev/null
	rm -rf *.gch 2>&1 > /dev/null
