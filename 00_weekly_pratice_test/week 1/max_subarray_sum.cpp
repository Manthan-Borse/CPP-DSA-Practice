#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>

int main(){
    int size,max_sum=INT_MIN;
    std::cout<<"enter the size of array:";
    std::cin>>size;
    std::vector<int> arr(size);
    for(int i =0;i<size;i++)
    {
        std:: cout<<"enter the "<<i+1<<"th element of array:";
        std::cin>>arr[i];
    }
    
   
    for(int i=0;i<size;i++)
    {
        int curr_sum=0;
        curr_sum=curr_sum+arr[i];
       max_sum = std::max(curr_sum,max_sum);
       if(curr_sum<0)
       {
        curr_sum=0;
       }
    }
    std::cout<<max_sum;
    return 0;
}