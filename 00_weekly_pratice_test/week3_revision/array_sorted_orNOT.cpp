/*Write:

bool isSorted(int arr[], int n)

It should return true if the array is in non-decreasing order, otherwise false.

Examples:

{10, 20, 20, 30, 40} → true
{10, 25, 7, 40, 30} → false*/

#include<iostream>
bool isSorted(int arr[], int n){
    for (int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
             return false;
        }
    }
    return true;
}
int main(){
   
    int arr[] = {10, 25, 7, 40, 30};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=isSorted(arr,n);
    
    if(ans==1){
        std::cout<<"array is sorted";
    }
    else{
        std::cout<<"array is not sorted";
    }

return 0;
}