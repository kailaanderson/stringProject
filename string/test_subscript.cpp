// string test program
//
// Tests: subscript, uses []
//
//
#include <iostream>
#include <cassert>
#include "string.hpp"

//======================================================
int main (){

  {
    //Setup
    String s("pollywantacracker");
    char result1;
    char result2;
    char result3;

    //Test
    result1 = s[0];
    result2 = s[5];
    result3 = s[10];

    //verify
    assert(result1 == 'p');
    assert(result2 == 'w');
    assert(result3 == 'c');
  }

   {
    //Setup
    String s("computer science 2 testing the boundaries");
    char result1;
    char result2;
    char result3;

    //Test
    result1 = s[17];
    result2 = s[26];
    result3 = s[40];

    //verify
    assert(result1 == '2');
    assert(result2 == ' ');
    assert(result3 == 's');

  }

   {
    //Setup
    String s("xxMHAEsR7bSM9255JP4ulvL82TifEXaeCfGRwHft4YI4UF9QnTDco4GW8AN1kkED1zLu27f0DVnR0KRhP3I9A73fUkT4jAnVqNoPgOYcs8Z09clhxJR1xHXzCm70JMYdIjVufYgN57NHiBDsUl8h1bxcdvAFEfpR1ygkRKYnFVHNSWeXRiVUYRYOs5CVGTv7Ht1voSILyiHiR78WAulBB3LgAs6OX43rwNDIEtDtlnYGBHI8jy9e5A9BnvYoZrk");
    char result1;

    //Test
    result1 = s[254];

    //verify
    assert(result1 == 'k');

  }

   {
     //Setup
     String s("ppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppp");
     char result1;
     char result2;
     char result3;

     //Test
     result1 = s[31];
     result2 = s[10];
     result3 = s[1];

     //verify
     assert(result1 == 'p');
     assert(result2 == 'p');
     assert(result3 == 'p');

   }

   {
    //Setup
    String s("successfully tested all possible fails");
    char result1;
    char result2;

    //Test
    result1 = s[0];
    result2 = s[37];

    //verify
    assert(result1 == 's');
    assert(result2 == 's');
   
  }

  


  std::cout << "Done testing subscript operator" << std::endl;
}
