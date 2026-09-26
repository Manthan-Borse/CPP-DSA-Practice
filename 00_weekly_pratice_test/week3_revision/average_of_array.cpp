/*Given:

int arr[5] = {10, 20, 30, 40, 50};

Write a function:

double arrayAverage(int arr[], int n)

It should return the average of all elements.

Expected result:

30*/

#include<iostream>

double arrayAverage(int arr[], int n){
    
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    
    return 1.0*sum/n ;     
}
int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    int n= sizeof(arr)/sizeof(arr[0]);
    
    
     double ans=arrayAverage( arr, n);
    
    std::cout<<"average  of array is :"<<ans<<std::endl;
    
    return 0;
}