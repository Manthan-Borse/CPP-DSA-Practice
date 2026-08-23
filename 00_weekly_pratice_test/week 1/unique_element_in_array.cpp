#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>

int main(){
    int size,ans=0;
    std::cout<<"enter the size of array:";
    std::cin>>size;
    std::vector<int> arr(size);
    for(int i =0;i<size;i++)
    {
        std:: cout<<"enter the "<<i+1<<"th element of array:";
        std::cin>>arr[i];
        ans=ans^arr[i];
    }
    std::cout<<ans;
   return 0;
}