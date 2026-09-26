/*int arr[5] = {10, 20, 30, 40, 50};
int arraySum(int arr[], int n);
Write a function:
that returns the sum of all elements.*/

#include<iostream>


int arraySum(int arr[],int n){
int sum=0;
for(int i=0;i<n;i++){
    sum+=arr[i];
}
return sum;
}

int main(){
    int arr[5]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=arraySum(arr,n);
std::cout<<"the sum of elements is :"<<ans<<std::endl;
return 0;
}