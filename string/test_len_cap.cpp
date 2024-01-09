//string test program
//
// Tests: length() and capacity()
//
//
#include <iostream>
#include <cassert>
#include "string.hpp"

//========================================================
int main(){
  //commented out milestone 2 things
  {
    //Capacity
    String s;
    int cap = s.capacity();

    //Verify
    assert(cap == 0);
    std::cout << "capacity is " << cap << std::endl;
  }


  {
    //Setup
    String s;
    int length;
    int cap;

    //Test
    length = s.length();
    cap = s.capacity();

    //Verify
    assert(length == 0);
    assert(cap == 0);
    std::cout << "The capacity of " << s << " is " << cap << std::endl;
    std::cout << "The length of " << s << " is " << length << std::endl;
  }
    
  {
    //Setup
    String s('k');
    int length;
    int cap;

    //Test
    length = s.length();
    cap = s.capacity();


    //Verify
    assert(length == 1);
    assert(cap == 1);
    std::cout << "The capacity of " << s << " is " << cap << std::endl;
    std::cout << "The length of " << s << " is " << length << std::endl;

  }

  {
    //Setup
    String s("play");
    int length;
    int cap;

    //Test
    length = s.length();
    cap = s.capacity();

    //Verify
    assert(length == 4);
    assert(cap == 4);
    std::cout << "The capacity of " << s << " is " << cap << std::endl;
    std::cout << "The length of " << s << " is " << length << std::endl;

  }

  {
    //Setup
    String s("nEKpgj7FvLw2WHNbiMgVBNMcKhUUqJbSaAoyKITZrNstLUZGh4nLXgcoy6Csg1UhVk2HN6G9sYJN5akhcGMW2aBV5T8TWOzkP0Ze0XNX1R8nWt8C4ekpvwmezKOiUggQxxREzPljxdEgLyieLs22xKBIciwKUvslkIm8BuqV4gcee02UZ99dl9KLnBoBVGDnOqUoRvfVHi7Jgsl3TMK1nsOfP1tqfaB1Ag8BIuB1YSdvIJwIKnKkEYAEoKL0JvJ");
    int length;
    int cap;

    //Test
    length = s.length();
    cap = s.capacity();

    //Verify
    assert(length == s.capacity());
    assert(cap == length);
    std::cout << "The length of " << s << " is " << length << std::endl;

  }

  {
      //Setup
    String s("clFDjmZW7Nm68xllzD6jq1QID4eUFC1DjVRpp1amh3CfsYTcVlpPTTiCDfclikDHXiekl2TAt72M417VVRo8x80Towpc4RnfP7JC");
    int length;
    int cap;

    //Test
    length = s.length();
    cap = s.capacity();

    //Verify
    assert(length == 100);
    assert(cap == 100);
    std::cout << "The length of " << s << " is " << length << std::endl;
    std::cout << "The capacity of " << s << " is " << cap << std::endl;
  }

  
  std::cout << "Done testing length and capacity." << std::endl;
}
