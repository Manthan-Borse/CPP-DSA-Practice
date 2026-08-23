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
    std::vector<int>ans(size,1);


    //prefix
    
    for(int i=1;i<size;i++){
        ans[i]=ans[i-1]*arr[i-1];
    }
    //suffix
     int  suffix=1;
    for(int i=size-2;i>=0;i--){
        suffix=suffix*arr[i+1];
        ans[i]=ans[i]*suffix;
    }
    
    for(int value:ans){
        std::cout<<value<<" ";
    }
    return 0;    
}
