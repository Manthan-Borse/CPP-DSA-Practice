/*
Given:int arr[8] = {10, 20, 10, 30, 10, 40, 20, 10};
Write:int countOccurrences(int arr[], int n, int target)
For:target = 10
the answer should be:4
*/

#include<iostream>

int countOccurrences(int arr[], int n, int target){
    int count=0;
    for(int i=0;i<n;i++){
        if( arr[i]==target)
        {
              count++;
        }
    }
    return count;     
}
int main(){
    int arr[8] = {10, 20, 10, 30, 10, 40, 20, 10};
    int n= sizeof(arr)/sizeof(arr[0]);
    int target;
    std::cout<<"enter element to count : ";
    std::cin>>target;
    int ans=countOccurrences( arr, n, target);
    
    std::cout<<"occurence of element is :"<<ans<<std::endl;
    
    return 0;
}