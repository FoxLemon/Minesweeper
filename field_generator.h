typedef struct {
    int size;
    int mines_placed;
    int flagged_mines;
    int *field;
} Mine_field;

// plant the mines in in the field, -1 is mine.
// number of mines depends on the difficulty
void plant_mines (Mine_field field, int diff);

// build the field using plant mines with given difficulty
Mine_field field_builder (int size, int diff);

// build the field using plant mines, 
// determined the difficulty by size
Mine_field field_builder_bysize (int size);

// free the field and reset all values
void clear_field (Mine_field field);