#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>

int main(){
    int n,max=INT_MIN,min=INT_MAX;
    std::cout<<"enter the size of array:";
    std::cin>>n;
    std::vector<int> arr(n);
    for(int i =0;i<n;i++)
    {
        std:: cout<<"enter the "<<i+1<<"th element of array:";
        std::cin>>arr[i];
    }
    std::cout<<"the  vector is :";
    for(int i =0;i<n;i++)
    {
        std:: cout<<arr[i]<<" ";
           
    }
    std::cout<<std::endl;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    std::cout<<"the maximum element in the array is:"<<max;
    std::cout<<std::endl;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    std::cout<<"the minimum element in the array is:"<<min;
    std::cout<<std::endl;
     for(int i=0;i<n-1;i++)
    {
        if(arr[i]<arr[i+1])
        {
            if(arr[n-2]<arr[n-1]){
            std::cout<<"the array is  sorted in ascending order";
            std::cout<<std::endl;
            break;
            }else{
                 std::cout<<"the array is not sorted in ascending order";
                 std::cout<<std::endl;
            }
        
        
        }
    }
    int start=0;
    int end=n-1;
    std::cout<<"the reversed vector is :";
    for(int i=0;i<n;i++)
    {
        std::swap(arr[start],arr[end]);
        start++;
        end--;
        if(start>=end)
        {
            for(int i =0;i<n;i++)
              {
                 std::cout<<arr[i]<<" ";
                 
              }  
              break;
        }
    }
    std::cout<<std::endl;
    return 0;
}
    