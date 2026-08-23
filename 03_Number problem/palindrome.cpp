#include<iostream>
using namespace std;

int main(){
    int num,rev=0,i;
    cout<<"enter number"<<endl;
    cin>>num;
    for(i=num;i!=0;i=i/10)
    {
        rev=rev*10+i%10;
    }
    if(num==rev)
    {
        cout<<"The given number is a palindrome"<<endl;
    }
    else
    {
        cout<<"The given number is not a palindrome"<<endl;
    }
    return 0;
}