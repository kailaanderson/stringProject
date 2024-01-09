// String test program
//
//Tests: less than
//
//
#include <iostream>
#include <cassert>
#include "string.hpp"

//=================================================================
int main(){

  {
    //Setup
    String smaller("toy");
    String larger("toys");
    //Test
    assert(smaller < larger);
    //Verify
    std::cout << smaller;
    std::cout << " < ";
    std::cout << larger;
    std::cout << std::endl;
  }

  {
    //Setup
    String smaller(" ");
    String larger(" plate");
    //Test
    assert(smaller < larger);
    //Verify
    std::cout << smaller << " < " << larger << std::endl;
  }

  {
    //Setup
    String smaller("gueraiebgurigyreibfwefowpgburwibufiregbpusbfuifrgbr");
    String larger("gueraiebgurigyreibfwefowpgburwibufiregbpusbfuifrgbrhy");
    //Test
    assert(smaller < larger);
    //Verify
    std::cout << smaller << " < " << larger << std::endl;
  }

  {
    //Setup
    String larger("mybestwaffle");
    String smaller("waffles");
    //Test
    assert(smaller > larger);
    //Verify
    std::cout << smaller << " > " << larger << std::endl;
  }

   {
    //Setup
    String larger("wafflez");
    String smaller("waffles");
    //Test
    assert(larger > smaller);
    //Verify
    std::cout << smaller << " <  " << larger << std::endl;
  }

   {
    //Setup
    String smaller("learning about lexicographical order");
    String larger("lexicographic");
    //Test
    assert(smaller < larger);
    //Verify
    std::cout << smaller << " < " << larger << std::endl;
  }

   {
    //Setup
    String larger("testing free comparisons");
    char smaller = 'q';
    //Test
    assert(smaller < larger);
    //Verify
    std::cout << smaller << " < " << larger << std::endl;
  }

    {
    //Setup
    String smaller("testing free comparisons");
    char larger = 'u';
    //Test
    assert(smaller < larger);
    //Verify
    std::cout << smaller << " < " << larger << std::endl;
    }

    {
    //Setup
    String smaller("gueraiebgurigyreibfwefowpgburwibufiregbpusbfuifrgbr");
    String larger("gueraiebgurigyreibfwefowpgburwibufiregbpusbfuifrgbr");
    //Test
    assert(smaller <= larger);
    //Verify
    std::cout << smaller << " <= " << larger << std::endl;
  }

     {
    //Setup
    String smaller("gueraiebgurigyreibfwefowpgburwibufiregbpusbfuifrgbr");
    String larger("gueraiebgurigyreibfwefowpgburwibufiregbpusbfuifrgbr");
    //Test
    assert(smaller >= larger);
    //Verify
    std::cout << smaller << " >= " << larger << std::endl;
  }



 





  

  //==============================================================


  std::cout << "Done testing less than." << std::endl;
}
