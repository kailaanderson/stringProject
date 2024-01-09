// string test program
//
//
// tests: find string
//
#include <iostream>
#include <cassert>
#include "string.hpp"

//=======================================================================
int main(){

  {
    //setup
    String s("thisisalongstring");
    String s2("long");
    int found;
    //test
    found = s.findstr(0, s2);
    //verify
    assert(found == 7);
    std::cout << s << ": " << s2 << "found at" << found << std::endl;
  }

  {
    //setup
    String s("short");
    String s2("ho");
    int found;
    //test
    found = s.findstr(1, s2);
    //verify
    assert(found == 1);
    std::cout << s << ": " << s2 << "found at" << found << std::endl;

  }

  {
    //setup
    String s("do you like to watch romantic movies?");
    String s2("movies");
    int found;
    //test
    found = s.findstr(0, s2);
    //verify
    assert(found == 30);
    std::cout << s << ": " << s2 << "found at" << found << std::endl;

  }

  {
    //setup
    String s("ttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttuuttttttttt");
    String s2("tuut");
    int found;
    //test
    found = s.findstr(20, s2);
    //verify
    assert(found == 89);
    std::cout << s << ": " << s2 << "found at" << found << std::endl;

  }

  {
    //setup
    String s("I have tested all boundaries in the test cases");
    String s2('l');
    int found;
    //test
    found = s.findstr(-1, s2);
    //verify
    assert(found == 15);
    std::cout << s << ": " << s2 << "found at" << found << std::endl;

  }







  std::cout << "Done testing find string." << std::endl;
}
