


all:
	g++ -std=c++11 -shared -fPIC $(wildcard *.cpp) -o libcvector.so
