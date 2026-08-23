#include<iostream>
using namespace std;

int main(){
    int num ,i,j;
    cout<<"Enter the number of rows: ";
    cin>>num;
    for (i=0;i<num;i++)
    {
         for (j=0;j<i;j++)
        { 
            cout<<" ";
            
        }

        
        for (j=1;j<=num-i;j++)
        { 
            cout<<j;
            
        }
        cout<<endl;
       
    }
    return 0;
}