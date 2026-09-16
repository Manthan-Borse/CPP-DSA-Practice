#include<iostream>
#include<vector>

void insertion_sort( std::vector <int>& a){
     
int n=a.size();
for(int i=1;i<n;i++){
    int curr=a[i];
    int prev=i-1;
    while(prev>=0 && a[prev]>curr){
        a[prev+1]=a[prev];
        prev--;
    }
    a[prev+1]=curr;
}


    for(int i=0;i<n;i++){
        std::cout<<a[i]<<" ";
    }

}

int main(){
    
    std::cout<<"Enter the size of the array: ";
    int x;
    std::cin>>x;
    std::vector<int>arr(x);
    std::cout<<"Enter the elements of the array: ";
    for(int i=0;i<x;i++){
        std::cin>>arr[i];
    }
    insertion_sort(arr);
    std::cout<<"Sorted array is: ";
    for(int i=0;i<x;i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}