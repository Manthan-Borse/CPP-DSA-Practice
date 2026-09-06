#include<iostream>
#include<vector>
#include<cmath>
long long power(int base, int exponent) {
    long long result = 1;

    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    return result;
}
int sqrt_num(int m,int n){
    int st=0;
    int end=m;
     
    while(st<=end){
        int mid=st+(end-st)/2;
        if(power(mid,n)==m){
            return mid;
        }
        if(power(mid,n)<m){
            
            st=mid+1;
        }
        else{
            end=mid-1;
        }
        
    }

    return -1;
}
int main(){
    int m;
    std::cout<<"enter the number: ";
    std::cin>>m;
    std::cout<<"enter the root: ";
    int n;
    std::cin>>n;
    int a=sqrt_num(m,n);
    std::cout<<a;
    return 0;
}