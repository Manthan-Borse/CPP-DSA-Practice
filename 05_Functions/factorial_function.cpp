#include<iostream>

int factorial(int n)
{
    int ans=1;
    for(int i=1;i<=n;i++)
    {
         ans = ans*i;
    }
    return ans;
     
}
int main(){
    std::cout<<factorial(5);
}