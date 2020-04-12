#include <stdio.h>
#include "point.h"

int main(void)
{
  int x = 36;
  int y = 27;
  struct Point current_location = {x, y};
  struct Point food_points[] = {{18, 76}, {19, 66}, {89, 57}, {9, 71}, {55, 38}};
  struct Point closest_food_location;
  int points_length = 5;
  get_closest_food(food_points, points_length, current_location, &closest_food_location);
  printf("Closest food is located at (%d, %d)\n", closest_food_location.x, closest_food_location.y);
  return 0;
}