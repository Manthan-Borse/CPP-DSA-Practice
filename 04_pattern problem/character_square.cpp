#include<iostream>
using namespace std;    


int main(){ 
   
   int num ,i,j;
    cout<<"Enter the number of rows: ";
    cin>>num;
    for (i=1;i<=num;i++)
    {
        char ch='A';
        for (j=1;j<=num;j++)
        {
            cout<<ch<<" ";
            ch=ch+1;
        }
        cout<<endl;
    }
    return 0;


}