#include<iostream>
#include<climits>
#include<vector>

int main(){
    int size;
    std::cout<<"enter the size of array:";
    std::cin>>size;
    std::vector<int> arr(size);
    for(int i =0;i<size;i++)
    {
        std:: cout<<"enter the "<<i+1<<"th element of array:";
        std::cin>>arr[i];
    }
    std::vector<int>ans(size);
    std::vector<int>suffix(size);
    std::vector<int>prefix(size);

    //prefix
    prefix[0]=1;
    for(int i=1;i<size;i++){
        prefix[i]=prefix[i-1]*arr[i-1];
    }
    //suffix
    suffix[size-1]=1;
    for(int i=size-2;i>=0;i--){
        suffix[i]=suffix[i+1]*arr[i+1];
    }
    for(int i=0;i<size;i++){
        ans[i]=prefix[i]*suffix[i];
    }
    for(int value:ans){
        std::cout<<value<<" ";
    }
    return 0;    
}
