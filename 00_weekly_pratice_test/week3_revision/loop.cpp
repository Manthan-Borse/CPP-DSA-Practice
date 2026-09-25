//Write a for loop that prints all five elements:10,20,30,40,50
/*
#include<iostream>
int main(){
    int arr[5]={10,20,30,40,50};
    int n=sizeof(arr) / sizeof(arr[0]);

    for(int i=0;i<n;i++){
        std::cout<<arr[i]<<" ";
    }
}
    */
#include<iostream>
int main(){
    int arr[5]={10,20,30,40,50};
    int n=sizeof(arr) / sizeof(arr[0]);

    for(int i=n-1;i>=0;i--){
        std::cout<<arr[i]<<" ";
    }
}