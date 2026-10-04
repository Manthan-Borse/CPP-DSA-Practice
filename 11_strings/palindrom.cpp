#include <iostream>
#include <string>
#include <cctype>

bool isAlphaNumeric(char c) {
    return (c >= 'a' && c <= 'z') ||
           (c >= 'A' && c <= 'Z') ||
           (c >= '0' && c <= '9');
}

bool isPalindrome(const std::string& str) {
    int st = 0;
    int end = str.length() - 1;

    while (st < end) {

        if (!isAlphaNumeric(str[st])) {
            st++;
            continue;
        }

        if (!isAlphaNumeric(str[end])) {
            end--;
            continue;
        }

        if (std::tolower(static_cast<unsigned char>(str[st])) !=
            std::tolower(static_cast<unsigned char>(str[end]))) {
            return false;
        }

        st++;
        end--;
    }

    return true;
}

int main() {
    std::string str;

    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    std::cout << "You entered: " << str << std::endl;

    if (isPalindrome(str)) {
        std::cout << "The string is a palindrome." << std::endl;
    } else {
        std::cout << "The string is not a palindrome." << std::endl;
    }
}