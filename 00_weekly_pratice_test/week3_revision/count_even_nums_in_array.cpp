/*
Write a function:int countEven(int arr[], int n)
that returns the number of even elements in an array.
For:int arr[] = {10, 7, 4, 13, 8, 21};
the answer should be:3
*/

#include<iostream>

int countEven(int arr[], int n){
    int count=0;
    for(int i=0;i<n;i++){
        if( arr[i]%2==0)
        {
              count++;
        }
    }
    return count;     
}
int main(){
    int arr[] = {10, 7, 4, 13, 8, 21};
    int n= sizeof(arr)/sizeof(arr[0]);
    
    
    int ans=countEven( arr, n);
    
    std::cout<<"count  of even element is :"<<ans<<std::endl;
    
    return 0;
}