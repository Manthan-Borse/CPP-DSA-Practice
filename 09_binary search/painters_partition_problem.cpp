#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
bool isValid(std::vector<int>arr,int MAxallowdBoards,int n,int m){

    int pt=1,pb=0;

    for(int i=0;i<n;i++){

        if(arr[i]>MAxallowdBoards){
            return false;
        }else if(pb+arr[i]<=MAxallowdBoards){
            pb+=arr[i];

        }else{
            pt++;
            pb=arr[i];
        }
    }
    if(pt>m){
        return false;
    }else{
        return true;
    }
}
int BoardAlloc(std::vector<int>arr,int n,int m){
    if(m>n){
        return -1;
    }
     
    int st=*std::max_element(arr.begin(),arr.end());
    int end=std::accumulate(arr.begin(), arr.end(), 0);
    int ans=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(isValid(arr,mid,n,m)){
            ans=mid;
            end=mid-1;
        }
        else{
            st=mid+1;
        }

    }

    return ans;
}



int main(){
    int n,m;
    std::cout<<"enter thr number of painting boards:";
    std::cin>>n;
    std::cout<<"enter thr number of painters:";
    std::cin>>m;
    std::vector<int> arr(n);
    for(int i=0;i<n;i++){
         std::cout<<"enter the lenght of "<<i+1<<"th board :";
         std::cin>>arr[i];
    }

    std::cout<<BoardAlloc(arr,n,m);

    return 0;
}
