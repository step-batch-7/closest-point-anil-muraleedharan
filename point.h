struct Point
{
  int x;
  int y;
} ;

void get_closest_food(struct Point food_points[], int points_length, struct Point current_location, struct Point *closest_food_location);
