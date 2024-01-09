// string test program
//
//
// Tests: input
//
#include <iostream>
#include <cassert>
#include <fstream>
#include "string.hpp"

//==================================================
int main(){

  std::ifstream input("testInput.txt");
  if (!input){
    std::cout << "Stream failed to open" << std::endl;
    return 1;
  }

  String stream;
  input >> stream;

  std::cout << "Input stream inputted: " << stream << std::endl;
  
  std::cout << "Done testing input." << std::endl;
}
