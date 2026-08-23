#include<iostream>
using namespace std;
int main(){
    int num,count=0,i;
    cout<<"Enter a number: ";
    cin>>num;
    for(i=num;i!=0;i=i/10)
    {
        count++;
    }
    cout<<"Number of digits in the given number is: "<<count<<endl;
    return 0;
}