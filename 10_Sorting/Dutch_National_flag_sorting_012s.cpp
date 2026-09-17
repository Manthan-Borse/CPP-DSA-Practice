#include<iostream>
#include<vector>
#include<utility>

void DNF_Sort(std::vector<int>& a){
    int low=0;int mid=0;
    int n=a.size();
    int high=n-1;
    while(mid<=high){
        if(a[mid]==0){
            std::swap(a[mid],a[low]);
            low++;
            mid++;
        }
        else if(a[mid]==1){
            mid++;
        }
        else{
            std::swap(a[mid],a[high]);
            high--;
        }
    }
    
}

int main(){
    
    std::cout<<"Enter the size of the array: ";
    int x;
    std::cin>>x;
    std::vector<int>arr(x);
    std::cout<<"Enter the elements of the array (only 0s, 1s and 2s): ";
    for(int i=0;i<x;i++){
        std::cin>>arr[i];
    }
    DNF_Sort(arr);
    std::cout<<"Sorted array is: ";
    for(int i=0;i<x;i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}
