#include<iostream>
using namespace std;

int main()
{
    int size,max=0;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
      {
        cout<<"Enter the "<<i+1<<"th element of the array: ";
        cin>>arr[i];
      }
    for(int i=0;i<size;i++)
      {
        if(arr[i]>max)
           {
             max=arr[i];
           }
      }

        cout<<endl<<"The maximum number in the array is: "<<max<<endl;
    
    return 0;
}