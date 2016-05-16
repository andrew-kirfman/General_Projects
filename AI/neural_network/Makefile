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


all: neuron.o
	$(CC) $(CFLAGS) $(STD) neuron.o -o neural_network

neuron.o: neuron.cpp neuron.h
	$(CC) $(CFLAGS) $(STD) -c neuron.cpp neuron.h 


clean:
	rm -rf *.o 2>&1 > /dev/null
	rm -f neural_network 2>&1 > /dev/null
	rm -rf *.gch 2>&1 > /dev/null
