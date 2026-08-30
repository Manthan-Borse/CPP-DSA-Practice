#include<iostream>
#include<vector>
#include<numeric>
bool isValid(std::vector<int>arr,int MAxallowdPAges,int n,int m){

    int std=1,pg=0;

    for(int i=0;i<n;i++){

        if(arr[i]>MAxallowdPAges){
            return false;
        }else if(pg+arr[i]<=MAxallowdPAges){
            pg+=arr[i];

        }else{
            std++;
            pg=arr[i];
        }
    }
    if(std>m){
        return false;
    }else{
        return true;
    }
}
int BookAlloc(std::vector<int>arr,int n,int m){
    if(m>n){
        return -1;
    }
     
    int st=0;
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
    std::cout<<"enter thr number of books:";
    std::cin>>n;
    std::cout<<"enter thr number of students:";
    std::cin>>m;
    std::vector<int> arr(n);
    for(int i=0;i<n;i++){
         std::cout<<"enter the no. of pages in "<<i+1<<"th Book :";
         std::cin>>arr[i];
    }

    std::cout<<BookAlloc(arr,n,m);

    return 0;
}
