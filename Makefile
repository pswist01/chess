
all: chess

clean:
	rm -f *.o chess *~

chess: board.o bishop.o king.o knight.o pawn.o piece.o queen.o rook.o chess.o
	g++ -g -o chess board.o bishop.o king.o knight.o pawn.o piece.o \
		queen.o rook.o chess.o

board.o: board.cpp piece.h king.h queen.h bishop.h knight.h rook.h pawn.h
	g++ -g -o board.o -c board.cpp

chess.o: chess.cpp
	g++ -g -o chess.o -c chess.cpp
