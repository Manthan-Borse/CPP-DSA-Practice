#include<iostream>

int factorial_Ofn(int n)
{
    int n_fact=1;
    for(int i=1;i<=n;i++)
    {
         n_fact = n_fact*i;
    }
    return n_fact;
     
}
int factorial_Ofr(int r)
{
    int r_fact=1;
    for(int i=1;i<=r;i++)
    {
         r_fact = r_fact*i;
    }
    return r_fact;
     
}
int factorial_Of_nr(int a)
{
    int nr_fact=1;
    for(int i=1;i<=a;i++)
    {
         nr_fact = nr_fact*i;
    }
    return nr_fact;
     
}
int main(){
    int n,r,a,b,c,ans;
    std::cout<<" enter value of n:";
    std::cin>>n;
    std::cout<<" enter value of r:";
    std::cin>>r;
    a=factorial_Ofn(n);
   b= factorial_Ofr(r);
    c=factorial_Of_nr(n-r);
    ans=a/(b*c);
    std::cout<<ans;
    return 0;
    
}