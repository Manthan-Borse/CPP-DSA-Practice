#include<iostream>

int main(){
    char str0[100];
    char str1[100];
    std::cout <<"printing using cin: ";
    std::cout << "\nEnter a string: ";
    std::cin>>str0;
    std::cout << "You entered: " << str0 << std::endl;
    std::cout << "printing using getline: ";
    std::cout << "\nEnter a string: ";
    std::cin.getline(str1, 100,'.');
    std::cout << "You entered: " << str1 << std::endl;
    return 0;
}