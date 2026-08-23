#include<iostream>
using namespace std;
int main(){
    int num,i;
    cout<<"enter number "<<endl;
    cin>>num;
    for(i=1;i<=num;i++)
    {
        if(i%2==0)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}