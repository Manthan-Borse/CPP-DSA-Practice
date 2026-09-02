#include<iostream>
#include<vector>

int floor(std::vector<int>arr,int n,int target){
    int st=0;
    int end=n-1;
    int ans=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]<=target){
            ans=mid;
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}
int coil(std::vector<int>arr,int n,int target){
    int st=0;
    int end=n-1;
    int ans=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]>=target){
            ans=mid;
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    return ans;
}
int main(){
    int n,target;
    std::cout<<"enter the size of array:";
    std::cin>>n;    
    std::vector<int> arr(n);
    for(int i=0;i<n;i++){
            std::cout<<"enter the "<<i+1<<"th element of array :";
            std::cin>>arr[i];
        }
    std::cout<<"enter the target element for floor and coil :";
    std::cin>>target;
    

    std::cout<<"the floor  of the target element is at index :"<<floor(arr,n,target)<<" and is :"<<arr[floor(arr,n,target)]<<std::endl;
    std::cout<<"the coil  of the target element is at index :"<<coil(arr,n,target)<<" and is :"<<arr[coil(arr,n,target)]<<std::endl;
}