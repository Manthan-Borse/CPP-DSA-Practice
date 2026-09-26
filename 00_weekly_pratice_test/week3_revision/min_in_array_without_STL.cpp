/*
Write:
int arrayMin(int arr[], int n)
for:
{10, 20, 5, 40, 30}
It should return:5
*/

#include<iostream>

int arrayMin(int arr[],int n){
    if(n<1){
        std::cout<<"array is empty";   
    }
int min=arr[0];
for(int i=1;i<n;i++){
    if(arr[i]<min){
        min=arr[i];
    }
}
return min;
}

int main(){
    int arr[5]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=arrayMin(arr,n);
std::cout<<"the min of elements is :"<<ans<<std::endl;
return 0;
}