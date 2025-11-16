# Make file for mini_minesweeper

GCC = gcc
CFLAGS = -Wall -Wextra -std=c11

mini_minesweeper: main.o field_generator.o game_play.o
	$(GCC) $(CFLAGS) -o mini_minesweeper main.o field_generator.o game_play.o

main.o: main.c field_generator.h game_play.h
	$(GCC) $(CFLAGS) -c main.c

game_play.o: game_play.c game_play.h field_generator.h
	$(GCC) $(CFLAGS) -c game_play.c

field_generator.o: field_generator.c field_generator.h
	$(GCC) $(CFLAGS) -c field_generator.c11

.PHONY: clean
clean:
	rm -f *.o mini_minesweeper