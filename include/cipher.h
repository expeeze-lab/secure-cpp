#ifndef CIPHER_H
#define CIPHER_H

#include <string>

std::string caesarEncrypt(const std::string& text, int shift);
std::string caesarDecrypt(const std::string& text, int shift);

#endif

