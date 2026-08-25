#include<iostream>


int main(){
    int arr[]={10,20,30,40,50};
    int* ptr=arr;

    std::cout<<*arr<<std::endl;
    std::cout<<arr<<std::endl;
    std::cout<<*ptr<<std::endl;
    std::cout<<ptr<<std::endl;
    std::cout<<ptr+4<<std::endl;
    std::cout<<(ptr+4)-(ptr)<<std::endl;

}