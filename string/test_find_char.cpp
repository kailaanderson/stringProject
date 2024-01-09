// string test program
//
// tests: find char
//
//
#include <iostream>
#include <cassert>
#include "string.hpp"

//===================================================
int main(){

  {
    //setup
    String s("hi");
    int found;
    //test
    found = s.findch(0,'h');
    //verify
    assert(found == 0);
  }

  {
    //setup
    String s("playutrdsernghyufdsrymjkgvfd");
    int found;
    //test
    found = s.findch(0,'k');
    //verify
    assert(found == 23);
  }

  {
    //setup
    String s("   ");
    int found;
    //test
    found = s.findch(0,' ');
    //verify
    assert(found == 0);
  }

  {
    //setup
    String s("space s");
    int found;
    //test
    found = s.findch(0,' ');
    //verify
    assert(found == 5);
  }

  {
    //setup
    String s("grading scales are hard to find at a university");
    int found;
    //test
    found = s.findch(12,'a');
    //verify
    assert(found == 15);
  }

  {
    //setup
    String s("find my character b");
    int found;
    //test
    found = s.findch(7,'b');
    //verify
    assert(found == 18);
  }

  {
    //setup
    String s("uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuumaaaaaaaaa");
    int found;
    //test
    found = s.findch(0,'m');
    //verify
    assert(found == 31);
  }

  {
    //setup
    String s("gwLQIk7hg8OcCIfxGsUzPcT8NgwzOoKWZ5DRJ6Z4cCuupPNTNbjDSQtoqaHZDyaXzdAe4qtFAPWz7p23bw2qMYzofs8eJapPkcx5");
    int found;

    //test
    found = s.findch(0, 'L');

    //verify
    assert(found == 2);
  }

  {
    //setup
    String s("xBA2DRGqapnzNRSb59MIrNnISvXGpEpkJ08mgcbsYQQH84AyqMCfrvLhWcWNZ1pNwXG3DTwVgabCudDqmew0sfEWekGjJ45N2v8Zs3vH7QVbNZLrRRozkOojSgP3x5l5OVd9tNX1mFwTPdbp9nT3rZndvljcuhwNjlZ9CpQcTShiIUWCQ16kVgsy7g2tr2C8sKCzxu8e");
    int found;

    //test
    found = s.findch(197, '8');

    //verify
    assert(found == 198);

  }

  {
    //setup
    String s("VtVcaWyNGJ6MvfclPZC54oDsYL0QX9xBgXtgvKpDDzzPsbYQ5rivAnI4DVGoOJg5BqBBlyHsWo5jzogVXG7FzwbaSbcJLFN6xLQEoo0g8e8bLJedbabibA8Z4zezstl7lLme6SSlVbnJK1uHhMdLohGrCU1Ov0EniCiQqebK3DayXlAIA4HaTbD0GUzVe1uZg5B70N4lPrtUg5Pm7HQMDwkNvIMjJSoAtpNYSWLi9nn1kCUk2F8vLX6vR4T0oJOPlnfTNLIaF6v5GnqKGsiv3CN2JvWOTy0oKDTwK8NflJ3p");
    int found;

    //test
    found = s.findch(1, 'V');

    //verify
    assert(found == 2);

  }







  std::cout << "Done testing findchar." << std::endl;
}
