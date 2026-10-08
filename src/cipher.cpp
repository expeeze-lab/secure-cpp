#include "cipher.h"

std::string caesarEncrypt(const std::string& text, int shift) {
    std::string result = text;
    for (char& c : result) {
        if (c >= 'a' && c <= 'z') c = (c - 'a' + shift) % 26 + 'a';
        else if (c >= 'A' && c <= 'Z') c = (c - 'A' + shift) % 26 + 'A';
    }
    return result;
}

std::string caesarDecrypt(const std::string& text, int shift) {
    return caesarEncrypt(text, 26 - (shift % 26));
}
