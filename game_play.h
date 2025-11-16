#include "field_generator.h"

typedef struct {
    int x,y;
} Cord;

// print the you win message, if flagged is the same number as placed mines
void you_win (int *mines_placed, int *flagged);

// print the you loose message, but checking should be in check space
void you_loose ();

// when space is 0, expand until the side is at the end of the field or any other numbers
void expand_space (int *field, Cord c);

// flag express as -2 in field, if flagged space is a mine add 1 to flagged
void place_flag (int *field, int *flagged, Cord c);

// print the field out for the user to see
void print_field (int *field);

// check if the space is a mine, else do expand space
void check_space (Mine_field field, Cord c);