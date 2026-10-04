#include<iostream>
#include<string>

int main(){
    std::string s;
    std::cout << "Enter a string: ";
    std::getline(std::cin, s);
    std::cout << "You entered: " << s << std::endl;
    std::cout << "Enter a substring to remove: ";
    std::string sub;
    std::getline(std::cin, sub);

    while( s.length()>0 && s.find(sub)<s.length()){
        s.erase(s.find(sub),sub.length());
    }
   
    std::cout << "String after removing occurrences of '" << sub << "': " << s << std::endl;
}