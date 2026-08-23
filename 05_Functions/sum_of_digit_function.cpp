#include<iostream>

int sumOf_digit(int n)
{
    int sum=0,count=0;
    for(int i=n;i>0;i/=10)
    {
        sum+=i%10;
        count++;
       
    } std::cout<<sum<<std::endl;
        std::cout<<count<<std::endl;
    return 1 ;

}
int main(){int num;
    std::cout<<"enter the number:"<<std::endl;
    std:: cin>>num;
    sumOf_digit(num);
    return 0;
}