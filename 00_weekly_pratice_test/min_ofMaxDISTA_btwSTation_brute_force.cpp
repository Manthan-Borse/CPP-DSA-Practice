#include<iostream>
#include<vector>
#include<algorithm>

int minimiseMAXDist(std::vector<int>arr,int k){
    int n = arr.size();
    
     std::vector<double>gaps(n-1);
    for(int i=0;i<n-1;i++){
        gaps[i] = arr[i+1]-arr[i];
    }
    
    std::vector<double>station(n-1,0);
    for(int i=0;i<k;i++){
        int max_index = std::max_element(gaps.begin(),gaps.end())-gaps.begin();
        station[max_index]++;
        gaps[max_index] = (double)(arr[max_index+1]-arr[max_index])/(station[max_index]+1);

    }
    int ans=*std::max_element(gaps.begin(),gaps.end());
    return ans;
}
int main(){
    
    int n,k;
    std::cout<<"enter the number of gas stations in array:";
    std::cin>>n;
    std::vector<int> arr(n);
    for(int i=0;i<n;i++){
         std::cout<<"enter the "<<i+1<<"th gas station coordinate :";
         std::cin>>arr[i];
    }
    std::cout<<"enter the number of new station you want to add:";
    std::cin>>k;

    std::cout<<minimiseMAXDist(arr,k);

    return 0;

}