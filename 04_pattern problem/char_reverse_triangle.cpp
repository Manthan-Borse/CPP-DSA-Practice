#include <iostream>
using namespace std;
int main(){
    int num ,i,j;
    cout<<"Enter the number of rows: ";
    cin>>num;
    char ch='A';
    
    for (i=0;i<num;i++)
    {
        for (j=0;j<=i;j++)
        {
            cout<<" ";
        }
        for (j=0;j<num-i;j++)
        {
            cout<<ch;           
        }
        cout<<endl;
        ch=ch+1;
    }
    return 0;
}