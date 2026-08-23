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
    for(int i=0;i<size;i++){
        int product = 1;
        for(int j=0;j<size;j++){
            if(j!=i){
                product *=arr[j];
            }
        }
        ans[i]=product;
    }
    std::cout<<"the product array is :"<<std::endl;
    for(int value:ans){
        std::cout<<value<<" ";
    }
    return 0;    
}