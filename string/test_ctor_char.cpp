// String test program
//
// Tests: char constructor, uses ==
//
//
#include <iostream>
#include <cassert>
#include "string.hpp"

//=====================================================================
int main(){

  {
  //Setup
    String str('l');
  //Test
    assert(str == 'l');
  //Verify
    std::cout << str;
    std::cout << " == ";
    std::cout << "l";
  }

  {
    //Setup
    String str(' ');
    //Test
    assert(str == ' ');
    // Verify
  }

  {
    //Setup
    String str('w');
    //Test
    assert(str == 'w');
    // Verify
    std::cout << str;
    std::cout << " == ";
    std::cout << "w";
  }

  std::cout << "Done testing character constructor." << std::endl;



  
}
