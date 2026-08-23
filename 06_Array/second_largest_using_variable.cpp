#include<iostream>
#include <climits>
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
    int max=INT_MIN;
    int second_max=INT_MIN;
    for(int i=0;i<size;i++)
      {
        if(arr[i]>max)
        {
            second_max=max;
            max=arr[i];
        }
        else if(arr[i]>second_max && arr[i]!=max)
        {
            second_max=arr[i];
        }
      }

    cout<<endl<<"The second largest element in the array is: "<<second_max<<endl;

    return 0;
}