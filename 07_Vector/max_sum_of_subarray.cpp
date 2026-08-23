#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int size,st,end,max_sum=INT_MIN;
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
        int curr_sum=0;
          for (end=st;end<size;end++)
          {
            curr_sum+=arr[end];
            max_sum=max(curr_sum,max_sum);

           }


        }   
       cout<<"maximun subarray sum is:"<<max_sum;
      return 0;

}