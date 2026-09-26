/*
Write: int lastOccurrence(int arr[], int n, int target)
For: int arr[] = {10, 20, 10, 30, 10}; and : target = 10
it should return:4
*/

#include<iostream>

int lastOccurrences(int arr[], int n, int target){
   
    int temp=-1;
    for(int i=0;i<n;i++){
        if( arr[i]==target)
        {
              
              temp=i;
        }
    }
    return temp;     
}
int main(){
    int arr[8] = {10, 20, 10, 30, 10};
    int n= sizeof(arr)/sizeof(arr[0]);
    int target;
    std::cout<<"enter element to find its last occuerence : ";
    std::cin>>target;
    int ans=lastOccurrences( arr, n, target);
    
    std::cout<<"last occurence of element is :"<<ans<<std::endl;
    
    return 0;
}