#include<iostream>
using namespace std;

int main()
{
    int size,st,end;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
      {
        cout<<"Enter the "<<i+1<<"th element of the array: ";
        cin>>arr[i];
      }
    for(st=0;st<size;st++)
      {
        for (end=st;end<size;end++)
          {
            for(int i=st;i<=end;i++)
              {
                cout<<arr[i];
              } 
              cout<<"  ";   
          }
        cout<<endl;
      }
 
    return 0;
}