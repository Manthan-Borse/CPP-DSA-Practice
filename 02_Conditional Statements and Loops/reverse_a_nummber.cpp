
#include <iostream>
using namespace std;
int main() {
    int num,rev=0,i;

    cout <<"enter the number to be reversed-"<<endl;
    cin>>num;

    for(i=num;i!=0;i=i/10)
    {
        rev=rev*10+i%10;
    }
    cout<<"The reversed number is: "<<rev<<endl;
    return 0;
}