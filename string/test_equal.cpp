// String test program
//
// Tests: ==, uses bigint(char) and bigint(const char[])
//
//
#include<iostream>
#include<cassert>
#include"string.hpp"

//=========================================================================
int main(){

  {
    //Setup
    String test('k');
    //Test
    assert(test == 'k');
    //Verify
    std::cout << "String == ";
    std::cout << test;
    std::cout << std::endl;
  }

  {
    //Setup
    String test1("karaoke");
    String test2("karaoke");
    //Test
    assert(test1 == test2);
    //Verify
    std::cout << test1;
    std::cout << " == ";
    std::cout << test2;
    std::cout << std::endl;
  }

  {
    //Setup
    String test1;
    String test2;
    //Test
    assert(test1 == test2);
    //Verify
    std::cout << test1;
    std::cout << " == ";
    std::cout << test2;
    std::cout << std::endl;
  }

  {
    //Setup
    String test1('h');
    String test2('h');
    //Test
    assert(test1 == test2);
    //Verify
    std::cout << test1;
    std::cout << " == ";
    std::cout << test2;
    std::cout << std::endl;
  }

  {
    //Setup
    String test1("abcdefghijklmnopqrstuvwxyz");
    String test2("abcdefghijklmnopqrstuvwxyz");
    //Test
    assert(test1 == test2);
    //Verify
    std::cout << test1;
    std::cout << " == ";
    std::cout << test2;
    std::cout << std::endl;
  }

  {
    //Setup
    String test1("hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhrrrrrrrrrrrrrrrrrrrrrrrrrrrruuuuuuuuuuuuuuuuuuuuuuiiiiiiiiiiiiiiiiiiiiiiiinnnnnnnnnnnnnnnnnnnnnnn");
    String test2("hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhrrrrrrrrrrrrrrrrrrrrrrrrrrrruuuuuuuuuuuuuuuuuuuuuuiiiiiiiiiiiiiiiiiiiiiiiinnnnnnnnnnnnnnnnnnnnnnn");
    //Test
    assert(test1 == test2);
    //Verify
    std::cout << test1;
    std::cout << " == ";
    std::cout << test2;
    std::cout << std::endl;
  }

  {
    //Setup
    String test1("p");
    String test2("p");
    //Test
    assert(test1 == test2);
    //Verify
    std::cout << test1;
    std::cout << " == ";
    std::cout << test2;
    std::cout << std::endl;
  }

  {
    //setup
    String test1("YzxlLppi0LGkiRMOCJJJJAYbMKGHW9P8G2WU6it5ikgmiLlh0U6l1UBMkRYa3YyXrEHrLeFgUMA23zNRx95ocMcMVEqa0qead1ShbGUfark4nOMMJKGliAiTKtQJjzGYebinB05JoxLDnWJH5zFfgaLnftsSmvwKdExPlVz1NfTrX0zFe53AE6jKw0stlQTNN8B0v4hX");
    String test2("YzxlLppi0LGkiRMOCJJJJAYbMKGHW9P8G2WU6it5ikgmiLlh0U6l1UBMkRYa3YyXrEHrLeFgUMA23zNRx95ocMcMVEqa0qead1ShbGUfark4nOMMJKGliAiTKtQJjzGYebinB05JoxLDnWJH5zFfgaLnftsSmvwKdExPlVz1NfTrX0zFe53AE6jKw0stlQTNN8B0v4hX");

    //test
    assert(test1 == test2);
  }

  {
    //setup
    String test1("AyiNEtMyLZ7DyXxitc7nQzfs2SGj2JZYtOxeMv5pYBOuuyD6vt5GclEqccMbKAywLzIivQ8dGHbOFR5vjBQBeX9j40VPrQcpt81iMgAxVZNU0sLa38HvJFxBLyTkDnbLEhUeFwU5y6u9DkcrT5eUovdBZrLzax4AhgbGgfKRnHUvASCSWFRO76UzMJWrNkLDbfKAOmd6II68UbGoSCZKakCptd64z15VAwYiVR");
    String test2("AyiNEtMyLZ7DyXxitc7nQzfs2SGj2JZYtOxeMv5pYBOuuyD6vt5GclEqccMbKAywLzIivQ8dGHbOFR5vjBQBeX9j40VPrQcpt81iMgAxVZNU0sLa38HvJFxBLyTkDnbLEhUeFwU5y6u9DkcrT5eUovdBZrLzax4AhgbGgfKRnHUvASCSWFRO76UzMJWrNkLDbfKAOmd6II68UbGoSCZKakCptd64z15VAwYiVR");

    //test
    assert(test1 == test2);
  }

  {
    //setup
    String test1("PyIgsHvd6p8BAcGSHe4D3q6HeywrODtHRdPLUU8XA9jlGMHJViFdA01bABh3S42BHpTvZXWHtGjxk42yMXrAOenyb2x84qfZcUK6F7DjoEJVdhEVVc2pLS42RLOr2tsY4DJcr0HnhaFEaNltZSvS0XyepW8TWe5oYW92UeY84BvrWOl99HDIS0OOSZ33FHxUEUUOZkIXYgDoKCLOyY6ugsEB6jOQC6K2YpK7ETBvcWhYwyJrjmFN3XWFBH");
    String test2("PyIgsHvd6p8BAcGSHe4D3q6HeywrODtHRdPLUU8XA9jlGMHJViFdA01bABh3S42BHpTvZXWHtGjxk42yMXrAOenyb2x84qfZcUK6F7DjoEJVdhEVVc2pLS42RLOr2tsY4DJcr0HnhaFEaNltZSvS0XyepW8TWe5oYW92UeY84BvrWOl99HDIS0OOSZ33FHxUEUUOZkIXYgDoKCLOyY6ugsEB6jOQC6K2YpK7ETBvcWhYwyJrjmFN3XWFBH");

    //test
    assert(test1 == test2);
  }
  
  {
    //setup
    String test1("x6dg8OyS8tx5GLKc2ojtmiZwKLtjF7mhEarb5Irfg3xTnhstit0CZQqAlcumGCzx62pz3UvWAPFIFDpvgYY28ZDdKCrQIuCZhWyUXGvtusP8cQWtRK3eOj2kfL82WaKV4sY7qIfUJeRD2SnGjMPMsjWhoj6PLYdgdbAFhAzQTbT0lPU4BuTAyPGodbhOcfJPKkd1S1TIMcjCDbzITQMP4e9tenXzI5zLEuIj9n7qfFr2gtalIjEAYAHQx9yMVvvvBjAuVEDVWXCrJxDFJ50WCKuKUEoIqRWLZKoWbApYumwc");
    String test2("x6dg8OyS8tx5GLKc2ojtmiZwKLtjF7mhEarb5Irfg3xTnhstit0CZQqAlcumGCzx62pz3UvWAPFIFDpvgYY28ZDdKCrQIuCZhWyUXGvtusP8cQWtRK3eOj2kfL82WaKV4sY7qIfUJeRD2SnGjMPMsjWhoj6PLYdgdbAFhAzQTbT0lPU4BuTAyPGodbhOcfJPKkd1S1TIMcjCDbzITQMP4e9tenXzI5zLEuIj9n7qfFr2gtalIjEAYAHQx9yMVvvvBjAuVEDVWXCrJxDFJ50WCKuKUEoIqRWLZKoWbApYumwc");

    //test
    assert(test1 == test2);

 }

  {
    //setup
    String test1("UO55caS3PDyGqmNvBkugnbnzADwxX3zOfmf8wsbZCdbAwLe9plZKUAm0TjPnWS5ULe754aywq2FKnVo39a5RFj19C7gLuTFBf2slVcE6fITyWdXub67wezR0Xd2BIHj1BHkktchEw4HQyddzGcwVZLowb9Xpv37tIZaLCHBy3s2MvVcxPvp9JqsDPUOk81NgfF3jRKUDfhRyyql3UHOSrjlQpxp8payxzJkAr9s6IQSPbEbOQMjYj9x011BOVXY8h4XFYbzVkApwlVggHSxW7AKgKhZUL1gr6HC4Xhqnz3CUkyLxheWre6m9zRg22L9wykSLt4TBUSf3jOuK6fC74Gh4NfKIvB9ZdPktZw6en83SakZsIlbjkPK2lbilwuKP4Dzlk2oia3oZj5vD");
    String test2("UO55caS3PDyGqmNvBkugnbnzADwxX3zOfmf8wsbZCdbAwLe9plZKUAm0TjPnWS5ULe754aywq2FKnVo39a5RFj19C7gLuTFBf2slVcE6fITyWdXub67wezR0Xd2BIHj1BHkktchEw4HQyddzGcwVZLowb9Xpv37tIZaLCHBy3s2MvVcxPvp9JqsDPUOk81NgfF3jRKUDfhRyyql3UHOSrjlQpxp8payxzJkAr9s6IQSPbEbOQMjYj9x011BOVXY8h4XFYbzVkApwlVggHSxW7AKgKhZUL1gr6HC4Xhqnz3CUkyLxheWre6m9zRg22L9wykSLt4TBUSf3jOuK6fC74Gh4NfKIvB9ZdPktZw6en83SakZsIlbjkPK2lbilwuKP4Dzlk2oia3oZj5vD");

    //test
    assert(test1 == test2);

  }

  {
    //setup
    String test1("mycZLNJebrm5cUpFOqPOOPRFYA9rzlpvDbjAzzU9BmIJQPUoBxHqT7lEmti15gCg8pSfQAXEj8Nl9hICdsphrqVTPnHbUXGsDtayqbwF3tWxy6hMTJCGLfz2EE1pLI9Sgp82JBtKk5P744qa4JElkvRIPmrSZGahsyz5YOn3hMhJx8EO66Z0zdTFI88yusbY4guygJ33wzdSZLNvsirXkgyVgoOb4VHqSUhEla72lCd8sGsujcjqFImyVoj41lC18jeA9rLwNKl3Vd0570r38GvhzcW5fShd24ihSrq1NxpVLVTO8dURkUuV0U3eiJZBrHmpfICkTItD5bIDRSkp8SOHrBPWz0jul6AfTx4OB00eS8Ybol4FjpZusxeZCMKW6zaMVslu99a1yN1A0QnoUk8LBcKTxB5u6y199CT2nlG7MOT7U3pFwMpab18PjfEBxynnlXQV3TXucG1VtsF6gru0CjOZqAsaBYJnSfl0nNRUamVJvFzn");
    String test2("mycZLNJebrm5cUpFOqPOOPRFYA9rzlpvDbjAzzU9BmIJQPUoBxHqT7lEmti15gCg8pSfQAXEj8Nl9hICdsphrqVTPnHbUXGsDtayqbwF3tWxy6hMTJCGLfz2EE1pLI9Sgp82JBtKk5P744qa4JElkvRIPmrSZGahsyz5YOn3hMhJx8EO66Z0zdTFI88yusbY4guygJ33wzdSZLNvsirXkgyVgoOb4VHqSUhEla72lCd8sGsujcjqFImyVoj41lC18jeA9rLwNKl3Vd0570r38GvhzcW5fShd24ihSrq1NxpVLVTO8dURkUuV0U3eiJZBrHmpfICkTItD5bIDRSkp8SOHrBPWz0jul6AfTx4OB00eS8Ybol4FjpZusxeZCMKW6zaMVslu99a1yN1A0QnoUk8LBcKTxB5u6y199CT2nlG7MOT7U3pFwMpab18PjfEBxynnlXQV3TXucG1VtsF6gru0CjOZqAsaBYJnSfl0nNRUamVJvFzn");

    //test
    assert(test1 == test2);

    } 

  std::cout << "Done testing equal operator." << std::endl;

}
