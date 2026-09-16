#include<iostream>
#include<vector>

int bubbleSort(std::vector<int>& arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                std::swap(arr[j],arr[j+1]);
            }
        }
    }
    return 0;
}

int main (){
    std::cout<<"Enter the size of the array: ";
    int x;
    std::cin>>x;
    std::vector<int>arr(x);
    std::cout<<"Enter the elements of the array: ";
    for(int i=0;i<x;i++){
        std::cin>>arr[i];
    }
    bubbleSort(arr);
    std::cout<<"Sorted array is: ";
    for(int i=0;i<x;i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}