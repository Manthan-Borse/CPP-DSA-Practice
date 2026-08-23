#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int size,max_sum=INT_MIN;
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
        int curr_sum=0;
        curr_sum=curr_sum+arr[i];
        max_sum=max(curr_sum,max_sum);
        if(curr_sum<0)
        {
            curr_sum=0;
        }

       }
       cout<<"maximun subarray sum is:"<<max_sum;

       return 0;
    }