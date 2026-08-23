#include <iostream>
using namespace std;
int main(){
    int num ,i,j;
    cout<<"Enter the number of rows: ";
    cin>>num;
    
    for (i=0;i<num;i++)
    {
        for (j=0;j<=num-i-1;j++)
        {
            cout<<" ";
        }
        for (j=1;j<=i+1;j++)
        {
            cout<<j;           
        }
        for(j=i;j>=1;j--)
        {
            cout<<j;
        }
        cout<<endl;
        
    }
    return 0;
}