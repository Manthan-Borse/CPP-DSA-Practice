#include<iostream>
#include<vector>
#include<climits>
int BS_rotated(std::vector<int> arr,int n){
    int st=0;
    int end= n-1;
    int min=INT_MAX;
    while(st<=end){
    int mid=st+(end-st)/2;
    if(arr[st]<=arr[mid]){
        min=std::min(min,arr[st]);
        st=mid+1;
    
    }
    else{
        min=std::min(min,arr[mid]);
        end=mid-1;
        }
        
    
  }
    return min;
}
int main(){
    int n;
    std::cout<<"enter size of array: ";
    std::cin>>n;

    std::vector<int>arr(n);

    for(int i=0;i<n;i++){
        std::cout<<"enter the "<<i+1<<"th element of array :";
        std::cin>>arr[i];

    }
     std::cout<<std::endl;
    int a= BS_rotated(arr,n);
    std::cout<<"the minimum element in the rotated array is: "<<a;
    return 0;
}