#include<iostream>
using namespace std;
int main(){
    int  n,i,factorial=1;
    cout<<"Enter the number  ";
   cin>>n;
   for(i=1;i<=n;i++)
   {
    factorial*=i;
    
   }
   cout<<"factorial of "<<n<<" is: "<<factorial<<endl;
   return 0;
}