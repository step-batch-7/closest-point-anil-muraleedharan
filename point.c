#include "point.h"

void get_closest_food(POINT food_points[], int points_length, POINT current_location, POINT *closest_food_location)
{
  int current_distance;
  int previous_distance = __INT_MAX__;
  for (int count = 0; count < points_length; count++)
  {
    int difference_of_x_cords = current_location.x - food_points[count].x;
    int difference_of_y_cords = current_location.y - food_points[count].y;
    int square_of_difference_of_x = difference_of_x_cords * difference_of_x_cords;
    int square_of_difference_of_y = difference_of_y_cords * difference_of_y_cords;
    int current_distance = square_of_difference_of_x + square_of_difference_of_y;
    if (current_distance < previous_distance)
    {
      previous_distance = current_distance;
      closest_food_location->x = food_points[count].x;
      closest_food_location->y = food_points[count].y;
    }
  }
}
