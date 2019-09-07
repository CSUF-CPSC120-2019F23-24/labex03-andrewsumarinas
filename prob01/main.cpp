// This program tests output on the ASCII character set, and on the sizeof operator.

#include <iostream>


int main()
{
  // TODO#1: try changing these values to others found in the ASCII character set
  // The class Quick Reference Guide contains this chart on page 5
  char my_char1 = 83;   // decimal
  char my_char2 = 0x53; // hex
  char my_char3 = 'S';  // character

  char my_char4 = 43; // decimal for plus sign
  char my_char5 = 0x2B; // hex for plus sign


  std::cout << "Char1: " << my_char1 << std::endl;
  std::cout << "Char2: " << my_char2 << std::endl;
  std::cout << "Char3: " << my_char3 << std::endl;

  std::cout << std::endl; // blank line to separate the different exercises

  // TODO#2: the following statement displays a plus sign
  // add 3 more cout statements that all print the same thing - a plus sign
  // however, use a different method to do so for each cout statement
  // hint: use the ASCII character set
  std::cout << "+" << std::endl;
  std::cout << my_char4  << std:: endl;
  std::cout << my_char5  << std:: endl;
  std::cout << '+' << std:: endl;


  std::cout << std::endl; // blank line to separate the different exercises

  // TODO#3: update the following statement to include escape characters
  // note that clang does not require an escape character on the single quote
  // but many other compilers do require it
  std::cout << "\'Y\'" << std::endl;

  std::cout << std::endl; // blank line to separate the different exercises

  // TODO#4: try changing the variable types and the data types in the
  // statements below to see what is returned by the sizeof operator
  float my_float = 15.5;
  std::cout << my_float << std:: endl << "The variable \"my_float\" is stored in " << sizeof(my_float) << "bytes'\n" <<std:: endl;

  char my_char = 'X';
  std::cout << my_char << std:: endl << "The variable \"my_char\" is stored in " << sizeof(my_char) << "byte(s)\n"  <<std:: endl;



  return 0;
}
