#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
      {
        cout<<"Enter the "<<i+1<<"th element of the array: ";
        cin>>arr[i];
      }
    cout<<endl<<"The unique numbers in the array are: ";
    for(int i=0;i<size;i++)
      {
        for(int j=0;j<size;j++)
          {
            if(i!=j && arr[i]==arr[j])
              {
                break;
              }
            if(j==size-1)
              {
                cout<<arr[i]<<" ";
              }
          }
      }
    
    return 0;
}