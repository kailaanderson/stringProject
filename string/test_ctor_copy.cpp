// string test program
//
//
// tests copy constructor
//
#include <iostream>
#include <cassert>
#include "string.hpp"

//===============================================================
int main(){

  {
    //setup
    String one("one");

    //test
    String two(one);

    //verify
    assert(one == "one");
    assert(two == "one");
    std::cout << one << " copied: " << two << std::endl;
  }

  {
    //setup
    String one(" ");

    //test
    String two(one);

    //verify
    assert(one == " ");
    assert(two == " ");
  }

  {
    //setup
    String one('p');

    //test
    String two(one);

    //verify
    assert(one == "p");
    assert(two == "p");
    std::cout << one << " copied: " << two << std::endl;
  }

  {
    //setup
    String one("HfUzdptFQHjFceXxlPPTv5AemqdpPHc3hymk5eUtXLrVbnlOoX");

    //test
    String two(one);

    //verify
    assert(one == "HfUzdptFQHjFceXxlPPTv5AemqdpPHc3hymk5eUtXLrVbnlOoX");
    assert(two == "HfUzdptFQHjFceXxlPPTv5AemqdpPHc3hymk5eUtXLrVbnlOoX");
    std::cout << one << " copied: " << two << std::endl;
  }

  {
    //setup
    String one("H6FJ75kz8MDioSfINhuStGPlkRKVIR5ofNp6uM6l8UyipFd2u1ZBV4zuKEgpprILKYAzZUrnz3bAi9WtxMbnQDoJ3JXWqFV2dE3w");

    //test
    String two(one);

    //verify
    assert(one == "H6FJ75kz8MDioSfINhuStGPlkRKVIR5ofNp6uM6l8UyipFd2u1ZBV4zuKEgpprILKYAzZUrnz3bAi9WtxMbnQDoJ3JXWqFV2dE3w");
    assert(two == "H6FJ75kz8MDioSfINhuStGPlkRKVIR5ofNp6uM6l8UyipFd2u1ZBV4zuKEgpprILKYAzZUrnz3bAi9WtxMbnQDoJ3JXWqFV2dE3w");
    std::cout << one << " copied: " << two << std::endl;
  }

  {
    //setup
    String one("wK5W2qYri8NQFincM740k28JuOoYn6Cw8Uhd879gfQbgm0aN5kDoFunnK3IZ3sxoqG6k9lwj2kgTWuwEAuZ4WFI5M3BxsbQ3SPgpdRfrT4qGy4mYS30k0CSN1P5Ac21domfBsI9nJzAyslD9wRehDS");

    //test
    String two(one);

    //verify
    assert(one == "wK5W2qYri8NQFincM740k28JuOoYn6Cw8Uhd879gfQbgm0aN5kDoFunnK3IZ3sxoqG6k9lwj2kgTWuwEAuZ4WFI5M3BxsbQ3SPgpdRfrT4qGy4mYS30k0CSN1P5Ac21domfBsI9nJzAyslD9wRehDS");
    assert(two == "wK5W2qYri8NQFincM740k28JuOoYn6Cw8Uhd879gfQbgm0aN5kDoFunnK3IZ3sxoqG6k9lwj2kgTWuwEAuZ4WFI5M3BxsbQ3SPgpdRfrT4qGy4mYS30k0CSN1P5Ac21domfBsI9nJzAyslD9wRehDS");
  }

  {
    //setup
    String one("mmlknToODzA2wdNKThftKIM32tsQpcocQ8TcpeaG56ZGt8AdH0JNXOtrIW7uStCmgEpmt0IUvGky6BCRGYfl31BBUaLWgyBnL2EuyNh99MZBzNAAkbLR0t6LdPe9LnARqpL9Pz902gJhNbkWQLtVDRuwjyE5sq7ewKeKg1gQjMVMrDtqJH9ghCC3GRamvgHmpBCiXxOR");

    //test
    String two(one);

    //verify
    assert(one == "mmlknToODzA2wdNKThftKIM32tsQpcocQ8TcpeaG56ZGt8AdH0JNXOtrIW7uStCmgEpmt0IUvGky6BCRGYfl31BBUaLWgyBnL2EuyNh99MZBzNAAkbLR0t6LdPe9LnARqpL9Pz902gJhNbkWQLtVDRuwjyE5sq7ewKeKg1gQjMVMrDtqJH9ghCC3GRamvgHmpBCiXxOR");
    assert(two == "mmlknToODzA2wdNKThftKIM32tsQpcocQ8TcpeaG56ZGt8AdH0JNXOtrIW7uStCmgEpmt0IUvGky6BCRGYfl31BBUaLWgyBnL2EuyNh99MZBzNAAkbLR0t6LdPe9LnARqpL9Pz902gJhNbkWQLtVDRuwjyE5sq7ewKeKg1gQjMVMrDtqJH9ghCC3GRamvgHmpBCiXxOR");
  }

  {
    //setup
    String one("FwzL68Xcl3lEh1RnGqfyZ0v81FHpM4wscK4SErbInuRbYuiXTnRPRgUY5WZkEMwHWtd3lTYuztFZanmBhiad0nNsFsuPiS18UHXACtxVXdYkBHsNQAS7U8zLo0Bf0nJrdkCkrgbcmncrUduNRyTXzDZSuoywdWDxLEkSPERQneXNN37NOmXCbz5JmCua2WwEsZ1WhZc5fB0GzaL2fZiobvtM5r4CmmQhk");

    //test
    String two(one);

    //verify
    assert(one == "FwzL68Xcl3lEh1RnGqfyZ0v81FHpM4wscK4SErbInuRbYuiXTnRPRgUY5WZkEMwHWtd3lTYuztFZanmBhiad0nNsFsuPiS18UHXACtxVXdYkBHsNQAS7U8zLo0Bf0nJrdkCkrgbcmncrUduNRyTXzDZSuoywdWDxLEkSPERQneXNN37NOmXCbz5JmCua2WwEsZ1WhZc5fB0GzaL2fZiobvtM5r4CmmQhk");
    assert(two == "FwzL68Xcl3lEh1RnGqfyZ0v81FHpM4wscK4SErbInuRbYuiXTnRPRgUY5WZkEMwHWtd3lTYuztFZanmBhiad0nNsFsuPiS18UHXACtxVXdYkBHsNQAS7U8zLo0Bf0nJrdkCkrgbcmncrUduNRyTXzDZSuoywdWDxLEkSPERQneXNN37NOmXCbz5JmCua2WwEsZ1WhZc5fB0GzaL2fZiobvtM5r4CmmQhk");
  }

  {
    //setup
    String one("5dHhmrctgGq12UAlF4ofCDB5AoHXeeJONhMWLoXeUeVhMU8YUQPMKs1CpRIMZHsNY5OxJr0kJ6BX5LTs3YC0um4YTG2nYeGomzBldK7jCkxBu5bDzDzt5WdpgKJQpvKkTAi60u0MSQtdN3O7k2ukzRBbDLqh0db9E104FjTtUfY42Zs4g5SHfdD2yJEPnD137hjox1eJHcB3AyjjBjxFDGZGW9ftOqf0e5MKamkIbOCEqy5pQfe3XseQZMHT5ANRdGtk");

    //test
    String two(one);

    //verify
    assert(one == "5dHhmrctgGq12UAlF4ofCDB5AoHXeeJONhMWLoXeUeVhMU8YUQPMKs1CpRIMZHsNY5OxJr0kJ6BX5LTs3YC0um4YTG2nYeGomzBldK7jCkxBu5bDzDzt5WdpgKJQpvKkTAi60u0MSQtdN3O7k2ukzRBbDLqh0db9E104FjTtUfY42Zs4g5SHfdD2yJEPnD137hjox1eJHcB3AyjjBjxFDGZGW9ftOqf0e5MKamkIbOCEqy5pQfe3XseQZMHT5ANRdGtk");
    assert(two == "5dHhmrctgGq12UAlF4ofCDB5AoHXeeJONhMWLoXeUeVhMU8YUQPMKs1CpRIMZHsNY5OxJr0kJ6BX5LTs3YC0um4YTG2nYeGomzBldK7jCkxBu5bDzDzt5WdpgKJQpvKkTAi60u0MSQtdN3O7k2ukzRBbDLqh0db9E104FjTtUfY42Zs4g5SHfdD2yJEPnD137hjox1eJHcB3AyjjBjxFDGZGW9ftOqf0e5MKamkIbOCEqy5pQfe3XseQZMHT5ANRdGtk");
  }

  {
    //setup
    String one("9WqQ6k6RRE7lAJ4fPwd48SvbGR0aM1KtM79whEFyTr4eCqrtsj5eCFvACZThM1ScdqEW1pMf5VoI0zJHBmZRSmhOMFOoQzUBy2KpPYfTCk6WxvuGJOthJVytxLQdhVnOghcFyynaGY3LQpyjxnVAW9xfepKVNgTzPbZU2x64tdXUGfscSlVmIBIEtWVSnLhHa3ckMq8ZWghRZtlds2hp9F8P3b16uC5sRB60sBN10pDYbwRKfqtOspxLe964noiHoTZWjvmZ0S01gbjcSIlliGFkWCnh0h0PgioCP120WLCD");

    //test
    String two(one);

    //verify
    assert(one == "9WqQ6k6RRE7lAJ4fPwd48SvbGR0aM1KtM79whEFyTr4eCqrtsj5eCFvACZThM1ScdqEW1pMf5VoI0zJHBmZRSmhOMFOoQzUBy2KpPYfTCk6WxvuGJOthJVytxLQdhVnOghcFyynaGY3LQpyjxnVAW9xfepKVNgTzPbZU2x64tdXUGfscSlVmIBIEtWVSnLhHa3ckMq8ZWghRZtlds2hp9F8P3b16uC5sRB60sBN10pDYbwRKfqtOspxLe964noiHoTZWjvmZ0S01gbjcSIlliGFkWCnh0h0PgioCP120WLCD");
    assert(two == "9WqQ6k6RRE7lAJ4fPwd48SvbGR0aM1KtM79whEFyTr4eCqrtsj5eCFvACZThM1ScdqEW1pMf5VoI0zJHBmZRSmhOMFOoQzUBy2KpPYfTCk6WxvuGJOthJVytxLQdhVnOghcFyynaGY3LQpyjxnVAW9xfepKVNgTzPbZU2x64tdXUGfscSlVmIBIEtWVSnLhHa3ckMq8ZWghRZtlds2hp9F8P3b16uC5sRB60sBN10pDYbwRKfqtOspxLe964noiHoTZWjvmZ0S01gbjcSIlliGFkWCnh0h0PgioCP120WLCD");
  }

  std::cout << "Done testing copy constructor." << std::endl;
}
