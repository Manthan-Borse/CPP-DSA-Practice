 #include<iostream>
 #include<vector>
 #include<utility>
 #include<cstring>

 
 void reverseString(char s[]){
      
        int st=0;
        int end=strlen(s)-1;
        while(st<end){
            std::swap(s[st],s[end]);
            st++;
            end--;
        }
    }
  int main(){
    char str[10];

  
    std::cout << "printing using getline: ";
    std::cout << "\nEnter a string: ";
    std::cin.getline(str, 10,'.');
    std::cout << "You entered: " << str << std::endl;
    reverseString(str);
    std::cout << "Reversed string: " << str << std::endl;
    return 0;
}
