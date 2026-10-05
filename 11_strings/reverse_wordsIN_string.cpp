#include<iostream>
#include<string>
#include<algorithm>

int main(){

    std::string str;
    std::cout<< "Enter a string: ";
    std::getline(std::cin,str);
    std::string ans="";
    std::reverse(str.begin(), str.end());
    for(int i=0;i<str.length();i++){
        std::string word="";
        while(i<str.length() && str[i]!=' '){
            word+=str[i];
            i++;
        }
        std::reverse(word.begin(), word.end());
        if(word.length()>0){
            ans +=" " + word;
        }
    }
    std::cout << "Reversed string: " <<ans.substr(1);
    ;
}