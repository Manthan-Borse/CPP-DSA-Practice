#include<iostream>
#include<climits>

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
    int smallest = INT_MAX;
    int largest = INT_MIN;
    for(int i=0;i<size;i++)
      {
        smallest = std::min(arr[i], smallest);
        largest = std::max(arr[i], largest);
      }

        cout<<endl<<"The maximum number in the array is: "<<largest<<endl;
        cout<<endl<<"The minimum number in the array is: "<<smallest<<endl;
    
    return 0;
}