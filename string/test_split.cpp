// string test program
//
//
// tests split
//

#include <iostream>
#include <vector>
#include <cassert>
#include "string.hpp"

//===============================

int main(){

  {
    //setup
    std::vector<String> test;
    String s("abc ef gh");

    //test
    test = s.split(' ');

    //verify
    assert(test[0] == "abc");
    assert(test[1] == "ef");
    assert(test[2] == "gh");
  }

  {
    //setup
    std::vector<String> test;
    String s("-a--b-");

    //test
    test = s.split('-');

    //verify
    assert(test[0] == "");
    assert(test[1] == "a");
    assert(test[2] == "");
    assert(test[3] == "b");
    assert(test[4] == "");
  }

  {
    //setup
    std::vector<String> test;
    String s("abkkcdkekfg k hij");

    //test
    test = s.split('k');

    //verify
    assert(test[0] == "ab");
    assert(test[1] == "");
    assert(test[2] == "cd");
    assert(test[3] == "e");
    assert(test[4] == "fg ");
    assert(test[5] == " hij");
  }

  {
    //setup
    std::vector<String> test;
    String s("abcdefghijklmnopqrstuvwxyz?abc? def ? ?g");

    //test
    test = s.split('?');

    //verify
    assert(test[0] == "abcdefghijklmnopqrstuvwxyz");
    assert(test[1] == "abc");
    assert(test[2] == " def ");
    assert(test[3] == " ");
    assert(test[4] == "g");
  }

  {
    //setup
    std::vector<String> test;
    String s("QKSxsuRzq7KyyvYa2dzglPRWElfldJJggLWnxOr2QnJAJf6azwbst8lZscv0Hud5zGlRJjtj0ImSsMDZjQ2WJGlaVIjlTMxbOxPsjA0VU6QQqn8uwp5C2daoN2UyDqJwUPuPIG43HFkSm5aEeao|DXe");

    //test
    test = s.split('|');

    //verify
    assert(test[0] == "QKSxsuRzq7KyyvYa2dzglPRWElfldJJggLWnxOr2QnJAJf6azwbst8lZscv0Hud5zGlRJjtj0ImSsMDZjQ2WJGlaVIjlTMxbOxPsjA0VU6QQqn8uwp5C2daoN2UyDqJwUPuPIG43HFkSm5aEeao");
    assert(test[1] == "DXe");
  }

  {
    //setup
    std::vector<String> test;
    String s("0JcDpjhjgmVetm2nEhsa2pm9SfLSHYLWTsq4xuAcDKvnbk3eeh7bFAo7RkwzcNrJ6nCQUQtbbrK1QnnkBXAaoM8d0qi70fSW7Ir8PaZlhwMK9Ztxzdrm1Z0XQ96oZKW8umzayUkZRo4rhNGL1mVglptSPKRXBW8wqB8cykfLBPVJ57zdAuMTIhTp90VKJhzyYmXn5sXrjyrClsaBSfvzP6zHmVnIQkXZP19eBnllbqCx2EIQYhB9NcyY9P5l1rlhNfjkfMcm2jIRj2pKIw3iAGlvoUDvc2Eerdf77oDFW9vq]]");

    //test
    test = s.split(']');

    //verify
    assert(test[0] == "0JcDpjhjgmVetm2nEhsa2pm9SfLSHYLWTsq4xuAcDKvnbk3eeh7bFAo7RkwzcNrJ6nCQUQtbbrK1QnnkBXAaoM8d0qi70fSW7Ir8PaZlhwMK9Ztxzdrm1Z0XQ96oZKW8umzayUkZRo4rhNGL1mVglptSPKRXBW8wqB8cykfLBPVJ57zdAuMTIhTp90VKJhzyYmXn5sXrjyrClsaBSfvzP6zHmVnIQkXZP19eBnllbqCx2EIQYhB9NcyY9P5l1rlhNfjkfMcm2jIRj2pKIw3iAGlvoUDvc2Eerdf77oDFW9vq");
    assert(test[1] == "");
  }

  {
    //setup
    std::vector<String> test;
    String s("CEVXoB0KwU2vdFZyLRgwiBsedD6jfae2Ao7EFGYwiJO1JNlyffC28wV7BEucgnGkHX48l9rRgcOwKQm6mYffzEdBIXAAwkQegaWPJg2udSzZjkWnNaPjqznocjwY4Il74qcLbKKbyYBqKeoGgUWusPrQQvLRJaZ9U9k2GrQ7rNWL50kREasHKWTfz91QebSA8zkghLvVE3L5qtNs,9h0GFZjS1s86d7MhMwlPOzUx9tBpu5O5MJP37cpnqr6jInmQmvv6kpCPWqrsKsmUVZYL44s6qwiIW5F9cPaQfsv4FMCS");

    //test
    test = s.split(',');

    //verify
    assert(test[0] == "CEVXoB0KwU2vdFZyLRgwiBsedD6jfae2Ao7EFGYwiJO1JNlyffC28wV7BEucgnGkHX48l9rRgcOwKQm6mYffzEdBIXAAwkQegaWPJg2udSzZjkWnNaPjqznocjwY4Il74qcLbKKbyYBqKeoGgUWusPrQQvLRJaZ9U9k2GrQ7rNWL50kREasHKWTfz91QebSA8zkghLvVE3L5qtNs");
    assert(test[1] == "9h0GFZjS1s86d7MhMwlPOzUx9tBpu5O5MJP37cpnqr6jInmQmvv6kpCPWqrsKsmUVZYL44s6qwiIW5F9cPaQfsv4FMCS");
  }

  {
    //setup
    std::vector<String> test;
    String s("ueUDurSGvykiexcA409Gs0RNUy3fI3IJZXMdUHbLcjIaSqn1hatONTY0cXAfdyawBh0FnIlA1NquGMFiHGNYbaAUsidP3wQNWtvLaOvaPf5GrRFpvWYJIpve5x4wtNAgmNkS4weqbfpRKQSiMPVaeXtftMKa5JRXYX9RNnAziwe33EpbQTUnOShBdZz1YC3fVVUY96CaiPTTV67e5tegT351RbZYHkVT3wTos9NJjuGVkaQbclonLjyD2LZgOuNkFN5CJj79nViCb69jNNiMfeaYzkTis5EIzyIJbRrucm6,Q");

    //test
    test = s.split(',');

    //verify
    assert(test[1] == "Q");
  }

  {
    //setup
    std::vector<String> test;
    String s("so7ky.oIvYbGb5KVsrxOp1FUdbNzxhEJz4GWsgSPvRewMmt96NF3QdtEmL3mLQGtDnwMtIUVziABzym2IpC3plFHfKgGGFF5seO4pZEDvhk25QOp48ucw7jlsKS7ce5e3hxoWHjED8IShhgyqJsZTT5F1Zlj2CgPIECbiW2dvJxBbYaDbfe1hqLE651BKiYY6G31XnT8a45aXoh2Bc3L0I5wGuUmvdEhR7AXUbBtPYPVqR8Hg1EnjzMN1koxu8P5hbCdOb4tj7oVmO2zPMYaR6p03ZlFA9CsdhVWfM9QR3qWT");

    //test
    test = s.split('.');

    //verify
    assert(test[0] == "so7ky");
    assert(test[1] == "oIvYbGb5KVsrxOp1FUdbNzxhEJz4GWsgSPvRewMmt96NF3QdtEmL3mLQGtDnwMtIUVziABzym2IpC3plFHfKgGGFF5seO4pZEDvhk25QOp48ucw7jlsKS7ce5e3hxoWHjED8IShhgyqJsZTT5F1Zlj2CgPIECbiW2dvJxBbYaDbfe1hqLE651BKiYY6G31XnT8a45aXoh2Bc3L0I5wGuUmvdEhR7AXUbBtPYPVqR8Hg1EnjzMN1koxu8P5hbCdOb4tj7oVmO2zPMYaR6p03ZlFA9CsdhVWfM9QR3qWT");
  }

  {
    //setup
    std::vector<String> test;
    String s("bmVQrLuLo82YOYO8q8f37EDOfaFzcWoNZel3PTKtzA5Uqi3nKjEHmkCXQsuUF90e55J701keFjvYVmUyBa0KvF7dv9dfYmbpKMYpEh4SR6cMs8GxfqpYWMy YBG382VFTw1CElFoYrxWMXaXfXA7We3vGLurqdoU0n4hZt2fYsEHZrtClMQy8RcrnKavskjO83Bt4giYIRVeBN1PPp J8tFmmU4WbCBeiE9M1rtNcAxlerTbUqGJDqyqe95FxMisd9EiHrkRV576urUCHz0Xq2e7Btk5WJlteHYG2HkWGIhTCd");

    //test
    test = s.split(' ');

    //verify
    assert(test[0] == "bmVQrLuLo82YOYO8q8f37EDOfaFzcWoNZel3PTKtzA5Uqi3nKjEHmkCXQsuUF90e55J701keFjvYVmUyBa0KvF7dv9dfYmbpKMYpEh4SR6cMs8GxfqpYWMy");
    assert(test[1] == "YBG382VFTw1CElFoYrxWMXaXfXA7We3vGLurqdoU0n4hZt2fYsEHZrtClMQy8RcrnKavskjO83Bt4giYIRVeBN1PPp");
    assert(test[2] == "J8tFmmU4WbCBeiE9M1rtNcAxlerTbUqGJDqyqe95FxMisd9EiHrkRV576urUCHz0Xq2e7Btk5WJlteHYG2HkWGIhTCd");
  }

  std::cout << "Done testing split" << std::endl;
    
}
