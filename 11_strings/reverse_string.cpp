 #include<iostream>
 #include<string>
 #include <algorithm>


 int main(){
    std::string str="i am manthan";

    std::reverse(str.begin(),str.end());
    std::cout << "Reversed string: " << str << std::endl;
 }