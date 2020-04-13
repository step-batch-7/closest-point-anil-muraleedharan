#include "point.h"
#include <math.h>

double distance_of_two_points (POINT first_point, POINT second_point)
{
    double square_of_difference_of_x = pow(first_point.x - second_point.x,2);
    double square_of_difference_of_y = pow(first_point.y - second_point.y,2);
    return sqrt(square_of_difference_of_x + square_of_difference_of_y);
}

void get_closest_food(POINT food_points[], int points_length, POINT current_location, POINT *closest_food_location)
{
  double current_distance;
  double previous_distance = __INT_MAX__;
  for (int count = 0; count < points_length; count++)
  {
    current_distance = distance_of_two_points(current_location, food_points[count]);
    if (current_distance < previous_distance)
    {
      previous_distance = current_distance;
      closest_food_location->x = food_points[count].x;
      closest_food_location->y = food_points[count].y;
    }
  }
}
