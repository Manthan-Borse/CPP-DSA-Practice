#include<iostream>
using namespace std;

int main(){
    int num ,i,j;
    cout<<"Enter the number of rows: ";
    cin>>num;
    for (i=num;i>=0;i--)
    {
        
        for (j=i+1;j>=1;j--)
        { 
            cout<<j<<" ";
            
        }
        cout<<endl;
       
    }
    return 0;
}
