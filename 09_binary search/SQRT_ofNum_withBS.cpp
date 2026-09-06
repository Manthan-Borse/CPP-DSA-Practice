#include<iostream>
#include<vector>
int sqrt_num(int n){
    int st=0;
    int end=n;
     int ans=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(mid*mid==n){
            return mid;
        }
        if(mid*mid<n){
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
    int n;
    std::cout<<"enter the number: ";
    std::cin>>n;
    int a=sqrt_num(n);
    std::cout<<a;
    return 0;
}