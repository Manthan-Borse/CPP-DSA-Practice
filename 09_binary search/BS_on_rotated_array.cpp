#include<iostream>
#include<vector>

int BS_rotated(std::vector<int> arr,int tar){
    int st=0;
    int end= arr.size()-1;
    while(st<=end){
    int mid=st+(end-st)/2;
    if(tar==arr[mid]){
        return mid;
    }
    if(arr[st]<=arr[mid]){
        if(arr[st]<=tar && tar<=arr[mid]){
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    else{
        if(arr[mid]<=tar&& tar<=arr[end]){
            st=mid+1;
        }
        else{
                end=mid-1   ; 
            }

    }
  }
    return -1;
}

int main(){
    int n,tar;
    std::cout<<"enter size of array: ";
    std::cin>>n;

    std::vector<int>arr(n);

    for(int i=0;i<n;i++){
        std::cout<<"enter the "<<i+1<<"th element of array :";
        std::cin>>arr[i];

    }
     std::cout<<"enter targeted element: ";
     std::cin>>tar;
     std::cout<<std::endl;
    int a= BS_rotated(arr,tar);
    std::cout<<a;
    return 0;
}