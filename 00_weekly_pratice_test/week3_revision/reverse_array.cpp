 /*Given:

int arr[5] = {10, 20, 30, 40, 50};

Write:

void reverseArray(int arr[], int n)

After calling it, the array should become:

50 40 30 20 10*/

#include<iostream>

 void reverseArray(int arr[], int n){
    int st=0;
    int end=n-1;
    int temp;
    while(st<=end){
        temp=arr[st];
        arr[st]=arr[end];
        arr[end]=temp;
        st++;
        end--;
    }
 }

int main(){
     int arr[5]={10,20,30,40,50};
     int n=sizeof(arr)/sizeof(arr[0]);
     reverseArray( arr,n);
     for(int i=0;i<n;i++){
        std::cout<<arr[i]<<" ";
     }
    return 0;
}