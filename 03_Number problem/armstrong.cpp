#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int num, i,count=0;
    float sum=0;
    cout<<"Enter a number: ";
    cin>>num;
    for(i=num;i!=0;i=i/10)
    {
        count++;
    }
        
    for(i=num;i!=0;i=i/10){

        float power = (float)pow(i%10,count) ;
        sum=sum+power;
    }
    cout<<sum<<endl;
    if(sum==num)
    {
        cout<<"The given number is an Armstrong number"<<endl;
    }
    else
    {
        cout<<"The given number is not an Armstrong number"<<endl;
    }
}