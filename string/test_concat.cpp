// string test program
//
// Tests: concatenation, uses + and +=
//
//
#include <iostream>
#include <cassert>
#include "string.hpp"

//===============================================
int main() {

  {
  //Setup
  String s;
  String s2;
  String concat;

  //Test
  s += s2;
  concat += s2;

  //verify
  assert(s == "");
  assert(s2 == "");
  assert(concat == "");
  }

  {
    //Setup
    String s("toy");
    String s2("s");
    String add;

    //Test
    add = s + s2;

    // verify
    assert(s == "toy");
    assert(s2 == "s");
    assert(add == "toys");
    std::cout << s << " + " << s2 << " = " << add << std::endl;
  }

  {
    //Setup
    String s("");
    String s2("mcdonald");
    String add;

    //Test
    add = s + s2;

    // verify
    assert(s == "");
    assert(s2 == "mcdonald");
    assert(add == "mcdonald");
    std::cout << s << " + " << s2 << " = " << add << std::endl;
  }

  {
    //Setup
    String s("mcdonald");
    String s2("");
    String add;

    //Test
    add = s + s2;

    // verify
    assert(s == "mcdonald");
    assert(s2 == "");
    assert(add == "mcdonald");
    std::cout << s << " + " << s2 << " = " << add << std::endl;
  }

  {
    //Setup
    String s('h');
    String s2('i');
    String add;

    //Test
    add = s + s2;

    // verify
    assert(s == "h");
    assert(s2 == "i");
    assert(add == "hi");
    std::cout << s << " + " << s2 << " = " << add << std::endl;
  }

  {
    //Setup
    String s("testing ");
    String s2("plus equals");

    //Test
    s += s2;

    // verify
    assert(s == "testing plus equals");
    assert(s2 == "plus equals");
  }

    {
    //Setup
    String s("");
    String s2("plus equals");

    //Test
    s += s2;

    // verify
    assert(s == "plus equals");
    assert(s2 == "plus equals");
  }

    {
    //Setup
    String s("plus equals");
    String s2("");

    //Test
    s += s2;

    // verify
    assert(s == "plus equals");
    assert(s2 == "");
  }
    
    {
      //setup
      String s("ia3fvb8jS9pR0oTMlYqTgw03T3u1HLdmohfxIFnuaM47dmsRHCN5GRuFCnNRIg2S1wlLBEeMK9OyIQghYrir0CC4pxRBRnCje1Ms");
      String s2("pPQuXmEzSJ3hjvXUcs39k4AMASkjGwGtMI3wjIKsSl55SSqMEafpo8PRFpGNwhhs6eDzxEuL7cvQaa9bTDyV1yXWA6OD7vDjxH1CqJCmBZ8T6KjTNlIkMSN36U3o8tdn9wo5jWH20V5YAZ8TFfREA4lcMkjqXpc6F0LL7sD9A5wGZVl5Idsh7frwLbR2Znda8erMcZSV");

      //test
      s += s2;

      //verify
      assert(s == "ia3fvb8jS9pR0oTMlYqTgw03T3u1HLdmohfxIFnuaM47dmsRHCN5GRuFCnNRIg2S1wlLBEeMK9OyIQghYrir0CC4pxRBRnCje1MspPQuXmEzSJ3hjvXUcs39k4AMASkjGwGtMI3wjIKsSl55SSqMEafpo8PRFpGNwhhs6eDzxEuL7cvQaa9bTDyV1yXWA6OD7vDjxH1CqJCmBZ8T6KjTNlIkMSN36U3o8tdn9wo5jWH20V5YAZ8TFfREA4lcMkjqXpc6F0LL7sD9A5wGZVl5Idsh7frwLbR2Znda8erMcZSV");
      assert(s2 == "pPQuXmEzSJ3hjvXUcs39k4AMASkjGwGtMI3wjIKsSl55SSqMEafpo8PRFpGNwhhs6eDzxEuL7cvQaa9bTDyV1yXWA6OD7vDjxH1CqJCmBZ8T6KjTNlIkMSN36U3o8tdn9wo5jWH20V5YAZ8TFfREA4lcMkjqXpc6F0LL7sD9A5wGZVl5Idsh7frwLbR2Znda8erMcZSV");
    }
    
    {
      //setup
      String s("x6dg8OyS8tx5GLKc2ojtmiZwKLtjF7mhEarb5Irfg3xTnhstit0CZQqAlcumGCzx62pz3UvWAPFIFDpvgYY28ZDdKCrQIuCZhWyUXGvtusP8cQWtRK3eOj2kfL82WaKV4sY7qIfUJeRD2SnGjMPMsjWhoj6PLYdgdbAFhAzQTbT0lPU4BuTAyPGodbhOcfJPKkd1S1TIMcjCDbzITQMP4e9tenXzI5zLEuIj9n7qfFr2gtalIjEAYAHQx9yMVvvvBjAuVEDVWXCrJxDFJ50WCKuKUEoIqRWLZKoWbApYumwc");
      String s2("t");
      
      //test
      s += s2;
      std::cout << "s2 is: " << s2 << std::endl;

      //verify
      assert(s == "x6dg8OyS8tx5GLKc2ojtmiZwKLtjF7mhEarb5Irfg3xTnhstit0CZQqAlcumGCzx62pz3UvWAPFIFDpvgYY28ZDdKCrQIuCZhWyUXGvtusP8cQWtRK3eOj2kfL82WaKV4sY7qIfUJeRD2SnGjMPMsjWhoj6PLYdgdbAFhAzQTbT0lPU4BuTAyPGodbhOcfJPKkd1S1TIMcjCDbzITQMP4e9tenXzI5zLEuIj9n7qfFr2gtalIjEAYAHQx9yMVvvvBjAuVEDVWXCrJxDFJ50WCKuKUEoIqRWLZKoWbApYumwct");

    }

  std::cout << "Done testing concatenation." << std::endl;

  
}
