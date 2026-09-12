#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>


int count_subarry(std::vector<int>arr,int mid){
    int count=1;
    int sum=0;
    for(int i=0;i<arr.size();i++){
        if(sum+arr[i]<=mid){
            sum+=arr[i];
        }else{
            count++;
            sum=arr[i];
        }
    }
    return count;
}

int splitArray(std::vector<int>arr,int k){
    int n = arr.size();
    int st= std::max_element(arr.begin(),arr.end())[0];
    int end = std::accumulate(arr.begin(),arr.end(),0);
    while(st<end){
        int mid = st+(end-st)/2;
        int NUMof_array_count= count_subarry(arr,mid);
        if(NUMof_array_count>k){
            st=mid+1;}
            else{
                end=mid;
            }
        
    }
    return st;
}

int main(){
    
    int n,k;
    std::cout<<"enter the number of elements in array:";
    std::cin>>n;
    std::vector<int> arr(n);
    for(int i=0;i<n;i++){
         std::cout<<"enter the "<<i+1<<"th element :";
         std::cin>>arr[i];
    }
    std::cout<<"enter the number of subarrays:";
    std::cin>>k;

    std::cout<<splitArray(arr,k);

    return 0;

}