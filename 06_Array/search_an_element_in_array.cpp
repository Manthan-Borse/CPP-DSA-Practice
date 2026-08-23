#include<iostream>
using namespace std;

int main(){
    int size,target;
    cout<<"Enter the size of the array: ";
    cin>>size;
    cout<<"Enter the element to be searched: ";
    cin>>target;
    int arr[size];
    for (int i=0;i<size;i++)
    {
        cout<<"Enter the "<<i+1<<"th element of the array: ";
        cin>>arr[i];
    }
    for(int i=0;i<size;i++)
    {
        if(arr[i]==target)
        {
            cout<<"The element "<<target<<" is found at index "<<i<<endl;
        }

    }
    return 0;
        
              
     
       
    }
    