#include<iostream>
#include<vector>
#include<climits>



int main(){
    int n,min_price=INT_MAX,profit_now=0,max_profit=0 ;
    std::cout<<"enter the size of array:";
    std::cin>>n;
    std::vector<int> arr(n);
    for(int i =0;i<n;i++)
    {
        std:: cout<<"enter the "<<i+1<<"th element of array:";
        std::cin>>arr[i];
    }
    for(int i =0;i<n;i++){
        if(arr[i]<min_price){
            min_price=arr[i];
        }
        profit_now=arr[i]-min_price;
        if(max_profit<profit_now){
            max_profit=profit_now;
        }

    }
    std::cout<<"Buy:"<<min_price<<std::endl;
    std::cout<<"Sell:"<<max_profit+min_price<<std::endl;
    std::cout<<"profit:"<<max_profit<<std::endl;

    return 0;
}