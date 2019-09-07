// This program calculates the amount of paint needed.

#include <iostream>

int main()
{
  // one gallon of paint covers 340 square feet
  int coverage = 340;
  int height = 6;
  int width = 100;
  int area;
  int gallons;

  // calculate how many gallons of paint it will take to cover
  // the area with 2 coats of paint
  area = height * width * 2;
  gallons = area / coverage;

  std::cout << "It will take " << gallons << " gallons of paint." <<std::endl;

  return 0;
}
