/*
Write:

int sumEven(int arr[], int n)

It should return the sum of only the even elements.

For:

int arr[] = {10, 7, 4, 13, 8, 21};

the answer should be:

22
*/

#include<iostream>
int sumEven(int arr[], int n){
    int sum=0;
    for(int i=0;i<n;i++){
        if( arr[i]%2==0)
        {
              sum+=arr[i];
        }
    }
    return sum;     
}
int main(){
    int arr[] = {10, 7, 4, 13, 8, 21};
    int n= sizeof(arr)/sizeof(arr[0]);
    
    
    int ans=sumEven( arr, n);
    
    std::cout<<"sum  of all even element is :"<<ans<<std::endl;
    
    return 0;
}