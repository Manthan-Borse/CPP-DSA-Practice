#include<iostream>
#include<vector>
int first_occurence(std::vector<int>arr,int n,int target){
    int st=0;
    int end=n-1;
    int f_occ=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]==target){
            f_occ=mid;
            end=mid-1;
        }
        else if(arr[mid]<target){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return f_occ;
}
int last_occurence(std::vector<int>arr,int n,int target){
    int st=0;
    int end=n-1;
    int l_occ=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]==target){
            l_occ=mid;
            st=mid+1;
        }
        else if(arr[mid]<target){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return l_occ;
}
int main(){
    int n,target;
    std::cout<<"enter the size of array:";
    std::cin>>n;    
    std::vector<int> arr(n);
    for(int i=0;i<n;i++){
            std::cout<<"enter the "<<i+1<<"th element of array :";
            std::cin>>arr[i];
        }
    std::cout<<"enter the target element for first and last occurence :";
    std::cin>>target;
    

    std::cout<<"the first occurence of the target element is at index :"<<first_occurence(arr,n,target)<<std::endl;
    std::cout<<"the last occurence of the target element is at index :"<<last_occurence(arr,n,target)<<std::endl;

return 0;
}