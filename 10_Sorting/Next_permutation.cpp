#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>

void NextPermutation(std::vector<int>& a){
    int n=a.size();
    int pivot=-1;
    for(int i=n-1;i>0;i--){
        if(a[i-1]<a[i]){
           pivot=i-1;
            break;
        }
    }
    if(pivot==-1){
        std::reverse(a.begin(),a.end());
        return;
    }
    int j=-1;
    for(int i=n-1;i>pivot;i--){
        if(a[i]>a[pivot]){
            j=i;
            break;
        }
    }
    std::swap(a[pivot],a[j]);
    std::reverse(a.begin()+pivot+1,a.end());
} 

int main(){
    std::cout<<"Enter the size of the array: ";
    int x;
    std::cin>>x;
    std::vector<int>arr(x);
    std::cout<<"Enter the elements of the array: ";
    for(int i=0;i<x;i++){
        std::cin>>arr[i];
    }
    NextPermutation(arr);
    std::cout<<"Next permutation is: ";
    for(int i=0;i<x;i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}
