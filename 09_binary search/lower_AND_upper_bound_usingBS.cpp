#include<iostream>
#include<vector>

int lower_bound(std::vector<int>arr,int n,int target){
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
int upper_bound(std::vector<int>arr,int n,int target){
    int st=0;
    int end=n-1;
    int ans=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]>target){
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
    int n,target1,target2;
    std::cout<<"enter the size of array:";
    std::cin>>n;    
    std::vector<int> arr(n);
    for(int i=0;i<n;i++){
            std::cout<<"enter the "<<i+1<<"th element of array :";
            std::cin>>arr[i];
        }
    std::cout<<"enter the target element for upper bound :";
    std::cin>>target1;
    std::cout<<"enter the second target element for lower bound :";
    std::cin>>target2;

    std::cout<<"the lower bound of the target element is at index :"<<lower_bound(arr,n,target1)<<std::endl;
    std::cout<<"the upper bound of the target element is at index :"<<upper_bound(arr,n,target2)<<std::endl;
}