/*Now write one function that finds the maximum element:
int arrayMax(int arr[], int n)
For:
int arr[5] = {10, 20, 30, 40, 50};
it should return:50
Don't use sort() or STL yet.*/

#include<iostream>
#include<climits>



int arrayMax(int arr[],int n){
int max=INT_MIN;
for(int i=0;i<n;i++){
    if(arr[i]>max){
        max=arr[i];
    }
}
return max;
}

int main(){
    int arr[5]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=arrayMax(arr,n);
std::cout<<"the max of elements is :"<<ans<<std::endl;
return 0;
}