/*
int power(int x, int n)
that returns: x^n
For example:power(2, 5) → 32 ,power(3, 4) → 81
Use recursion.
*/

#include<iostream>

int power(int x,int n){
    if(n==1){
        return x;
    }
    return x*power(x,n-1);
}

int main(){
    int x;
    std::cout<<"enter number:";
    std::cin>>x;
    int n;
    std::cout<<"enter power  ";
    std::cin>>n;
    int ans=power(x,n);
    std::cout<<"the vale of "<<n<<"th power of "<<x<<"is :"<<ans;

}