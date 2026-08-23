#include<iostream>
using namespace std;

int main()
{
    int size ;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
      {
        cout<<"Enter the "<<i+1<<"th element of the array: ";
        cin>>arr[i];
      }
    int element;
    cout<<"Enter the element to find its occurrences: ";
    cin>>element;
    int count=0;
    int index[size];
    for(int i=0;i<size;i++)
      {
        if(arr[i]==element)
        {
            count++;
            index[i]=i;
        }
      }
    
    cout<<endl<<"The number of occurrences of "<<element<<" in the array is: "<<count<<endl;
    cout<<"The indices of occurrences are: ";
    for(int i=0;i<size;i++)
      {
        if(arr[i]==element){
            cout<<index[i]<<" ";
        }
      }
    cout<<endl;
    return 0;
}