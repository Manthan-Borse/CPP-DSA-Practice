#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
bool isValid(std::vector<int>arr,int minAllowedDistance,int n,int m){

    int Cows=1,lastpos=arr[0];

    for(int i=1;i<n;i++){

        if(arr[i]-lastpos>=minAllowedDistance){
            lastpos=arr[i];
            Cows++;
        }
    }
    if(Cows==m){
        return true;
    }else{
        return false;
    }
}
int StallAlloc(std::vector<int>arr,int n,int m){
    sort(arr.begin(),arr.end());
    
     
    int st=1;
    int end=arr[n-1]-arr[0];
    int ans=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(isValid(arr,mid,n,m)){
            ans=mid;
             st=mid+1;
        }
        else{
           end=mid-1;
        }

    }

    return ans;
}



int main(){
    int n,m;
    std::cout<<"enter the number of Cows:";
    std::cin>>m;
    std::cout<<"enter the number of stalls:";
    std::cin>>n;
    std::vector<int> arr(n);
    for(int i=0;i<n;i++){
         std::cout<<"enter the position of "<<i+1<<"th stall :";
         std::cin>>arr[i];
    }

    std::cout<<StallAlloc(arr,n,m);

    return 0;
}
