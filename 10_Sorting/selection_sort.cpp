#include<iostream>
#include<vector>

int selectionSort(std::vector<int>& arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        std::swap(arr[i],arr[minIndex]);
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
    selectionSort(arr);
    std::cout<<"Sorted array is: ";
    for(int i=0;i<x;i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}