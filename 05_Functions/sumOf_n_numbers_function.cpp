#include<iostream>
int sum=0;
int sumOf(int n)
{
    
    for (int i=1;i<=n;i++)
    {
         sum=sum+i;
    }
    return sum;
}

int main(){
    int a;
    std::cout<<"enter value of n: ";
    std::cin>>a;
    std::cout<<sumOf(a);
    return 0;
}