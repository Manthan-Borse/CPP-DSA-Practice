#include<iostream>
using namespace std;

int main(){
    int num ,i,j;
    char ch='A';
    cout<<"Enter the number of rows: ";
    cin>>num;
    for (i=0;i<num;i++)
    {
        
        for (j=0;j<=i;j++)
        { 
            cout<<ch<<" ";
            ch=ch+1;
        }
        cout<<endl;
       
    }
    return 0;


}