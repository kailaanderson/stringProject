// string test program
//
//
// tests substring
//
#include <iostream>
#include <cassert>
#include "string.hpp"

//=================================================
int main(){

  {
    //setup
    String one("helloworld");
    String two;
    //test
    two = one.substr(3,5);
    //verify
    assert(two == "low");
    std::cout << two << " is a substring of "<< one << std::endl;
  }

  {
    //setup
    String one("thewaythecookiecrumblesisthricetimesfour");
    String two;
    String three;
    //test
    two = one.substr(9,14);
    three = two.substr(1,2);
    //verify
    assert(two == "cookie");
    assert(three == "oo");
    std::cout << two << " is a substring of "<< one << std::endl;

  }

   {
    //setup
    String one("yes I do");
    String two;
    //test
    two = one.substr(3,5);
    //verify
    assert(two == " I ");
    std::cout << two << " is a substring of "<< one << std::endl;

  }

   {
    //setup
    String one("Make sure to send in rough drafts by the deadline");
    String two;
    //test
    two = one.substr(13, 48);
    //verify
    assert(two == "send in rough drafts by the deadline");
    std::cout << two << " is a substring of "<< one << std::endl;

  }

   {
    //setup
    String one("beezwax");
    String two;
    //test
    two = one.substr(-1,6);
    //verify
    assert(two == "beezwax");
    std::cout << two << " is a substring of "<< one << std::endl;

  }

   {
    //setup
    String one("I have tested every boundary in the test cases");
    String two;
    //test
    two = one.substr(20,28);
    //verify
    assert(two == "boundary ");
    std::cout << two << " is a substring of "<< one << std::endl;

  }


  std::cout << "Done testing substring." << std::endl;
}
