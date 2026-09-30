/*Now write this function yourself:

int binarySearch(int arr[], int n, int target)

It should return the index if the target is found, and -1 otherwise.

Test it with:

int arr[] = {10, 20, 30, 40, 50, 60, 70};

Try target = 50.*/

#include<iostream>
int binarySearch(int arr[], int n, int tar){
    int st=0;
    int end=n-1;
    while(st<=end){
        int mid = st + (end-st)/2;
        if(arr[mid]==tar){
            return mid ;
        } else if(arr[mid]<tar){
            st=mid+1;
        }else{
            end=mid-1;
        }

    }
    return -1;
}

int main(){
        int arr[] = {10, 20, 30, 40, 50, 60, 70};
        int n=sizeof(arr)/sizeof(arr[0]);
        int tar;
        std::cout<<"enter target element:";
        std::cin>>tar;
        int ans=  binarySearch(arr,n,tar) ;
        std::cout<<"targeted element is at index:"<<ans;
}