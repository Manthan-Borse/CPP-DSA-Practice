#include<iostream>
using namespace std;

int main(){
    int num ,i,j,n=1;
    cout<<"Enter the number of rows: ";
    cin>>num;
    for (i=0;i<num;i++)
    {
        
        for (j=0;j<num;j++)
        { 
            cout<<n<<" ";
            n=n+1;
        }
        cout<<endl;
       
    }
    return 0;


}