typedef struct
{
  int x;
  int y;
} POINT;

void get_closest_food(POINT food_points[], int points_length, POINT current_location, POINT *closest_food_location);
