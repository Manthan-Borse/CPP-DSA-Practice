/*Write:

int secondLargest(int arr[], int n)

For:

int arr[] = {10, 25, 7, 40, 30};

the answer should be:

30
Constraint

Don't sort the array.*/

#include<iostream>
#include<climits>


int secondLargest(int arr[], int n){
int max=INT_MIN;
int second_largest=INT_MIN;
for(int i=0;i<n;i++){
    if(arr[i]>max){
       second_largest=max; 
       max=arr[i];
        
    }
    if(arr[i]>second_largest && arr[i]!=max){
        second_largest=arr[i];
    }
}
return second_largest;
}

int main(){
    int arr[] = {10, 40, 20, 40, 30};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=secondLargest(arr,n);
std::cout<<"the second largest element is :"<<ans<<std::endl;
return 0;
}