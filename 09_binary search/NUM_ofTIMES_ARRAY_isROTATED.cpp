#include<iostream>
#include<vector>
#include<climits>
int BS_rotated(std::vector<int> arr,int n){
    int st=0;
    int end= n-1;
    int min=INT_MAX;
    int index=-1;
    while(st<=end){
    int mid=st+(end-st)/2;
    if(arr[st]<=arr[mid]){
        if(arr[st]<min){
            min=arr[st];
            index=st;
        }
        st=mid+1;
    
    }
    else{
        if(arr[mid]<min){
            min=arr[mid];
            index=mid;
        }
        end=mid-1;
        }
        
    
  }
    return index;
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
    std::cout<<"the NO. of times the rotated array is rotated: "<<a;
    return 0;
}