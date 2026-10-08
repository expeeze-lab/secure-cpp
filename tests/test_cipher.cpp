#include <cassert>
#include <iostream>
#include "cipher.h"

int main() {
    assert(caesarEncrypt("abc", 1) == "bcd");
    assert(caesarDecrypt("bcd", 1) == "abc");
    std::cout << "All tests passed!" << std::endl;
    return 0;
}
