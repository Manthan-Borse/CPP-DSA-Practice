/*
Write a function:int countNegative(int arr[], int n)
that returns the number of negative elements.
For:int arr[] = {10, -5, 7, -2, -8, 20};
the answer should be:3
*/
#include<iostream>

int countNegative(int arr[], int n){
    int count=0;
    for(int i=0;i<n;i++){
        if( arr[i]<0)
        {
              count++;
        }
    }
    return count;     
}
int main(){
    int arr[] = {10, -5, 7, -2, -8, 20};
    int n= sizeof(arr)/sizeof(arr[0]);
    
    
    int ans=countNegative( arr, n);
    
    std::cout<<"count  of negative element is :"<<ans<<std::endl;
    
    return 0;
}