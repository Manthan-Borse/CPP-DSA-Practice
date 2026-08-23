#include<iostream>
using namespace std;

int main(){
  int n,sum=0;
  cout<<"Enter the number of elements in the array: ";
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cout<<"Enter the "<<i+1<<"th element of the array: ";
    cin>>arr[i];
  }
  for(int i=0;i<n;i++)
  {
    cout<<"the "<<i+1<<"th element of the array  is: ";
    cout<<arr[i]<<endl;
    sum=sum+arr[i];
  }
  cout<<endl;
  cout<<"The sum of the elements of the array is: "<<sum<<endl;

  return 0;
}