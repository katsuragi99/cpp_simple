CC=g++

all: main.o template.o 
	${CC} -o exe --std="c++11" main.cpp template.cpp 

main.o: main.cpp template.cpp
	${CC} -c main.cpp template.cpp

clean:
	rm main.o template.o
