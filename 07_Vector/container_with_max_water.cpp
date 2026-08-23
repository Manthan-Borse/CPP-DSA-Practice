#include<iostream>
#include<vector>
#include<climits>



int main(){
    int n,ht,wt,max_water=0 ,area;
    std::cout<<"enter the size of array:";
    std::cin>>n;
    std::vector<int> arr(n);
    for(int i =0;i<n;i++)
    {
        std:: cout<<"enter the "<<i+1<<"th element of array:";
        std::cin>>arr[i];
    }
    for(int i =0;i<n;i++){
        for(int j=i+1;j<n;j++){
             wt= j-i;
             ht=std::min(arr[i],arr[j]);
             area=wt*ht;
            max_water=std::max(max_water,area);
        }

    }
     std:: cout<<max_water;
    return 0;
}