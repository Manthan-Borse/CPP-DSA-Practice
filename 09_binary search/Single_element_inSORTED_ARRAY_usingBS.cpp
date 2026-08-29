#include<iostream>
#include<vector>

int BS(std::vector<int> arr){
 int n=arr.size();
 if(n==1){
    return arr[0];
 }       
int st=0;
int end=n-1;
int mid;
while(st<=end){
    mid=st+(end-st)/2;
    if(mid==0 && arr[mid]!=arr[mid+1]){
        return arr[mid];
        }
    if(mid==n-1 && arr[mid]!=arr[mid-1]){return arr[mid];}
    if(arr[mid-1]!=arr[mid] && arr[mid]!=arr[mid+1]){
            return arr[mid];
    }
    if(mid%2==0){
        if(arr[mid-1]==arr[mid]){
            end=mid-1;
        }else{
            st=mid+1;
        }
    }else{
        if(arr[mid-1]==arr[mid]){
            st=mid+1;
        }else{
            end=mid-1;
        }
    }
}
return -1;
}

int main(){
    int n;
    std::cout<<"enter size of array:";
    std::cin>>n;
    std::vector<int> arr(n);
    for(int i=0;i<n;i++){
         std::cout<<"enter the value of "<<i+1<<"th element of array:";
         std::cin>>arr[i];
    }

    std::cout<<BS(arr);

    return 0;
}







