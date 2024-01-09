//test string program
//
//
// tests swap assign
//
//
#include <iostream>
#include <cassert>
#include "string.hpp"

//=====================================================

int main(){

  {
    //setup
    String original('p');
    String assign;

    //test
    assign = original;

    //verify
    assert(assign == "p");
    assert(original == assign);
  }

  {
    //setup
    String original("try to assign");
    String assign("try");

    //test
    assign = original;

    //verify
    assert(assign == "try to assign");
    assert(original == assign);
  }

  {
    //setup
    String original("this is shorter");
    String assign("this is shorter but it isn't");

    //test
    assign = original;

    //verify
    assert(assign == "this is shorter");
    assert(assign == original);
  }

  {
    //setup
    String original("lCMSNpZlPBrLlsgxwMZgUd6avv53QHoholnb1JDZx6tWz2wieH");
    String assign("lCMSNpZlPBrLlsgxwMZgUd6avv53QHoholnb1JDZx6tWz2wieH");

    //test
    assign = original;

    //verify
    assert(assign == "lCMSNpZlPBrLlsgxwMZgUd6avv53QHoholnb1JDZx6tWz2wieH");
    assert(assign == original);
  }

  {
    //setup
    String original("OjJGFd5OQB5QuF2bmROmD2xXBnbS2AjTF2wALNUhkNAVpvpQhDwgG8kd4C1EN7EHgjHUJnfn6C7Btgj37NNPTlnnEDDfysqco6FD");
    String assign("6vwzUkKXAqBHKyTl9ggbwiJcIFjtDfz9L2KglVXBRzSilfd3J2YVdMzmRKj90brlGAVuI17bneU");

    //test
    assign = original;

    //verify
    assert(assign == "OjJGFd5OQB5QuF2bmROmD2xXBnbS2AjTF2wALNUhkNAVpvpQhDwgG8kd4C1EN7EHgjHUJnfn6C7Btgj37NNPTlnnEDDfysqco6FD");
    assert(assign == original);
  }

  {
    //setup
    String original("3xWSIVvpQmJxpuuJtwPkooI1pYfP5AFoOQMQhpe0J1R9RL0VMFb9uI03yViXEI7dH8VbIYdQUpanTCSxTK1ytUsMwkdM6XLUzl4X3V3op4pCKLS2U87ydYQEjIiSE11UDXDaXKBwlIZtnsT30MZWEYdDjF0aFrUbTd19D0eGpaQeBAq511KjzEvGpZNDh1fr82ZiXlVC");
    String assign("GPu6ERsTLHLvGsvpy8rUipJYc6HavSLNYCd7he9S4nMsBr4goZcS9kzfcL9zH31AXdt3Hu33JSvqQno1XwulPrNVDcsliYMRQX6RjeLSrSG4AbfZ5PYqkHhI0quPMefVHXYb8pMZovj0VcvZwhYPOhw2GdrpVORB39D5LDEFzZf9nys2so6T15Ibm0V6FW02lvCTPs1D");

    //test
    assign = original;

    //verify
    assert(assign == "3xWSIVvpQmJxpuuJtwPkooI1pYfP5AFoOQMQhpe0J1R9RL0VMFb9uI03yViXEI7dH8VbIYdQUpanTCSxTK1ytUsMwkdM6XLUzl4X3V3op4pCKLS2U87ydYQEjIiSE11UDXDaXKBwlIZtnsT30MZWEYdDjF0aFrUbTd19D0eGpaQeBAq511KjzEvGpZNDh1fr82ZiXlVC");
     assert(assign == original);
  }

  {
    //setup
    String original(" ");
    String assign("not empty");

    //test
    assign = original;

    //verify
    assert(assign == " ");
    assert(assign == original);
  }


  {
    //setup
    String original("qAZ9DNvMJlA0nBGVCJK5IjLdOLOYGgzFjY4oHxbkRo0w6WCSXtv4Nrqkfg1u0Y6peuxtSDTPWei9u0Jqidqd8a8peXwBRMjGuYrnAmBpl6B6JtypU40rRh3JIoPW7wkUN7AeZwkd7hjD4gtEYUZZkhJj8eXzdJTF7F6SyI7ByBivMjz3uOvbZlFwfbRr7c34trwzZgyrsAq6WCe5XOrcGHhgsqW4fr9QdZg9GgP3wjxFufObjPINqESADJcewYWI5PN9p7yP1DJZ2KD9z5050iVlLiUAN81PGxWL97ApmlOzXhzF89OpCisMBisVypfMHg0dF2fkEBJTiUgL2NVWd9B3BJNfLrmB5NMjzwhF3Hg6YFAAuj4L34BROem805ecPUyh1RStUhil64Yz");
    String assign("above is a very long string");

    //test
    assign = original;

    //verify
    assert(assign == "qAZ9DNvMJlA0nBGVCJK5IjLdOLOYGgzFjY4oHxbkRo0w6WCSXtv4Nrqkfg1u0Y6peuxtSDTPWei9u0Jqidqd8a8peXwBRMjGuYrnAmBpl6B6JtypU40rRh3JIoPW7wkUN7AeZwkd7hjD4gtEYUZZkhJj8eXzdJTF7F6SyI7ByBivMjz3uOvbZlFwfbRr7c34trwzZgyrsAq6WCe5XOrcGHhgsqW4fr9QdZg9GgP3wjxFufObjPINqESADJcewYWI5PN9p7yP1DJZ2KD9z5050iVlLiUAN81PGxWL97ApmlOzXhzF89OpCisMBisVypfMHg0dF2fkEBJTiUgL2NVWd9B3BJNfLrmB5NMjzwhF3Hg6YFAAuj4L34BROem805ecPUyh1RStUhil64Yz");
    assert(assign == original);
  }

  {
    //setup
    String original("dFfUSV0!wnI3dOO!otEGJ1K9b7V?ZvSxFc9e3GgByIXHhD/!VkjTRVpWHs2CtYzH!LL1288aEYlDeUjsd!0bGxQnz3llX7230F6J");
    String assign;

    //test
    assign = original;

    //verify
    assert(assign == "dFfUSV0!wnI3dOO!otEGJ1K9b7V?ZvSxFc9e3GgByIXHhD/!VkjTRVpWHs2CtYzH!LL1288aEYlDeUjsd!0bGxQnz3llX7230F6J");
    assert(assign == original);

  }

  {
    //setup
    String original("bbVj4C8Kz/nzLmXYy/ZbMhUUkXpg9oX9sgMOuDZssmy4KoGhgAjDIAlm80gg5piiNGMHGCxl89INvsb7h71ghybyQmMdABNR/DzwopFbXW3fmMswSXvSaWVL!cdqVoGXL9Oyc7bMkPNMw1/?pS!oL0LiQ59YaCU2eSgTpGVNdRWw65LDcEUnNGAAVSby1NpK/jkNQy!rxtwkGmwu!zZgTde1CfyjU4Ts9Z0AmCrU53R/BTsb?n54nhRwUClV1JMtuvQPkIaaFWL7ixZrspFj/g?h/OHF9DO!eEZrBdfni2?WBiWCir3y8?!ViqPV5wO1FJtOZK6D");
    String assign('k');

    //test
    assign = original;

    //verify
    assert(assign == "bbVj4C8Kz/nzLmXYy/ZbMhUUkXpg9oX9sgMOuDZssmy4KoGhgAjDIAlm80gg5piiNGMHGCxl89INvsb7h71ghybyQmMdABNR/DzwopFbXW3fmMswSXvSaWVL!cdqVoGXL9Oyc7bMkPNMw1/?pS!oL0LiQ59YaCU2eSgTpGVNdRWw65LDcEUnNGAAVSby1NpK/jkNQy!rxtwkGmwu!zZgTde1CfyjU4Ts9Z0AmCrU53R/BTsb?n54nhRwUClV1JMtuvQPkIaaFWL7ixZrspFj/g?h/OHF9DO!eEZrBdfni2?WBiWCir3y8?!ViqPV5wO1FJtOZK6D");
    assert(assign == original);
  }
	   



  std::cout << "Done testing swap assign" << std::endl;
}
