// This program calculates a person's height in feet (') and inches (").


#include <iostream>

int main()
{
  int myHeight1;
  double myHeight2;
  double myHeight3;

  std::cout << "Please enter the person's height in inches: " << std::endl;
  std::cin >> myHeight1;

  myHeight2 = myHeight1 / 12;
  myHeight3 = myHeight1 % 12;

  std::cout << "That person is " << myHeight2 << "\'" << myHeight3  << "\""<< std::endl;

  return 0;




}
