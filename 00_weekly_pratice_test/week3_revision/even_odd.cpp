//Write a C++ program that takes an integer from the user and prints whether it is even or odd.

#include<iostream>

int is_even(int a ){
    if(a%2==0){
       return 1;
    }else{
        return 0;
    }  
}

int main(){
    int a;
    std::cout<<"enter a valid integer:"<<std::endl;
    std::cin>>a;
    int ans=is_even(a);
    if(ans==1){
        std::cout<<"the number is even"<<std::endl;
    }
    else{
         std::cout<<"the number is odd"<<std::endl;

    }
    return 0;
}