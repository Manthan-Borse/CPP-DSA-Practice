/*Given:int arr[6] = {10, 25, 7, 40, 15, 30};
Write:int linearSearch(int arr[], int n, int target)
It should return the index where target is found.
For example:
target = 40 → 3
target = 7  → 2
What should it return if the target isn't present? Decide that yourself and implement it.*/

#include<iostream>

int linearSearch(int arr[], int n, int target){
    for(int i=0;i<n;i++){

        if( arr[i]==target){
                return i;
        }
    }
           std::cout<<"element not found "<<std::endl;
            return -1;

        
}
int main(){
    int arr[6] = {10, 25, 7, 40, 15, 30};
    int n= sizeof(arr)/sizeof(arr[0]);
    int target;
    std::cout<<"enter element to find : ";
    std::cin>>target;
    int ans=linearSearch( arr, n, target);
    if(ans!=-1){
    std::cout<<"element is found at index :"<<ans<<std::endl;
    }
    return 0;
}