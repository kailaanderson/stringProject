// String class test program
//
// Tests: Default constructor, uses ==
//
//
#include<iostream>
#include<cassert>
#include"string.hpp"

//=================================================================
int main(){
  //Setup

  //Test
  String defaultCtor;

  //Verify
  std::cout << "String ==" << defaultCtor << std::endl;
  assert(defaultCtor == "");

  std::cout<< "Done testing default constructor." << std::endl;
  return 0;
}
