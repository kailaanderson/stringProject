//String test program
//
// Tests: character array constructor, uses ==
//
//
#include <iostream>
#include <cassert>
#include "string.hpp"

//================================================================
int main(){

  {
    //Setup
    String str("Kaila");
    //Test
    assert(str == "Kaila");
    //Verify
    std::cout << str;
    std::cout << " == Kaila";
    std::cout << std::endl;
  }

  {
    //Setup
    String str(" ");
    //Test
    assert(str == " ");
    
  }

  {
    //Setup
    String str("hgrauibvurihtruabfeufisvudibruiasvgbfuiruhiednfejalfvhirownbgjrishfuieabgrhiabvjkaugraijkfiaothuripbidgroenbsoghruispbtgruiehupsfnrjgrusfospgbursghirosjg");
    //Test
    assert(str == "hgrauibvurihtruabfeufisvudibruiasvgbfuiruhiednfejalfvhirownbgjrishfuieabgrhi\
abvjkaugraijkfiaothuripbidgroenbsoghruispbtgruiehupsfnrjgrusfospgbursghirosjg");
    //Verify
    std::cout << str;
    std::cout << " == hgrauibvurihtruabfeufisvudibruiasvgbfuiruhiednfejalfvhirownbgjrishfuieabgrhi\
abvjkaugraijkfiaothuripbidgroenbsoghruispbtgruiehupsfnrjgrusfospgbursghirosjg";
    std::cout << std::endl;
  }

  {
    //Setup
    String str("j");
    //Test
    assert(str == "j");
    //Verify
    std::cout << str;
    std::cout << " == j";
    std::cout << std::endl;
  }

  {
    //Setup
    String str("xxMHAEsR7bSM9255JP4ulvL82TifEXaeCfGRwHft4YI4UF9QnTDco4GW8AN1kkED1zLu27f0DVnR0KRhP3I9A73fUkT4jAnVqNoPgOYcs8Z09clhxJR1xHXzCm70JMYdIjVufYgN57NHiBDsUl8h1bxcdvAFEfpR1ygkRKYnFVHNSWeXRiVUYRYOs5CVGTv7Ht1voSILyiHiR78WAulBB3LgAs6OX43rwNDIEtDtlnYGBHI8jy9e5A9BnvYoZrk");
    //Test
    assert(str == "xxMHAEsR7bSM9255JP4ulvL82TifEXaeCfGRwHft4YI4UF9QnTDco4GW8AN1kkED1zLu27f0DVnR0KRhP3I9A73fUkT4jAnVqNoPgOYcs8Z09clhxJR1xHXzCm70JMYdIjVufYgN57NHiBDsUl8h1bxcdvAFEfpR1ygkRKYnFVHNSWeXRiVUYRYOs5CVGTv7Ht1voSILyiHiR78WAulBB3LgAs6OX43rwNDIEtDtlnYGBHI8jy9e5A9BnvYoZrk");
    //Verify
    std::cout << str;
    std::cout << " == xxMHAEsR7bSM9255JP4ulvL82TifEXaeCfGRwHft4YI4UF9QnTDco4GW8AN1kkED1zLu27f0DVnR0KRhP3I9A73fUkT4jAnVqNoPgOYcs8Z09clhxJR1xHXzCm70JMYdIjVufYgN57NHiBDsUl8h1bxcdvAFEfpR1ygkRKYnFVHNSWeXRiVUYRYOs5CVGTv7Ht1voSILyiHiR78WAulBB3LgAs6OX43rwNDIEtDtlnYGBHI8jy9e5A9BnvYoZrk";
    std::cout << std::endl;
  }


  std::cout << "Done testing character array constructor." << std::endl;


  
}
