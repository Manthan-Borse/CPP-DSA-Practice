#include<iostream>
#include<vector>

int main ()
{
    int n;
    std::cout<<"enter the numbers";
    std::cin>>n;
    int* ptr=&n ;//add of n
    std::cout<<"address of enter number is:"<<&n<<std::endl;
    std::cout<<"address of enter number using pointer is:"<<ptr<<std::endl;
    std::cout<<"actual value of enter number is:"<<n<<std::endl;
    std::cout<<"actual value of enter number using pointer is:"<<*ptr<<std::endl;

}