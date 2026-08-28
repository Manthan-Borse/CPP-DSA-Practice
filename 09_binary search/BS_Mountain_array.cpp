#include<iostream>
#include<vector>

int BS(std::vector<int>arr,int st,int end){
    
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
            return mid;
        }
        if(arr[mid]>arr[mid+1]){
            end=mid-1;
        }else{
            st=mid+1;
        }
    }
return -1;

}

int main(){
    int n;
    std::cout<<"enter size of array:";
    std::cin>>n;
    std::vector<int>arr(n);
    for(int i=0;i<n;i++){
        std::cout<<"enter the "<<i+1<<"th element of array: ";
        std::cin>>arr[i];
   }
   int st=0;
   int end=n-1;

   std::cout<<BS(arr,st,end);
return 0;
}