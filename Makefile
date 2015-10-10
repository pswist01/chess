
all: chess

clean:
	rm -f *.o chess

chess: board.o chess.o
	g++ -g -o chess board.o chess.o

board.o: board.cpp king.h queen.h bishop.h knight.h rook.h 
	g++ -g -o board.o -c board.cpp

chess.o: chess.cpp
	g++ -g -o chess.o -c chess.cpp
