#include <iostream>
#include "cipher.h"

int main() {
    std::string text = "Hello, World!";
    int shift = 3;
    std::string encrypted = caesarEncrypt(text, shift);
    std::string decrypted = caesarDecrypt(encrypted, shift);
    std::cout << "Original:  " << text << std::endl;
    std::cout << "Encrypted: " << encrypted << std::endl;
    std::cout << "Decrypted: " << decrypted << std::endl;
    return 0;
}
