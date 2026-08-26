#include<iostream>
#include<vector>

int binarySearch(std::vector<int>arr,int tar){
   int start=0;
    int end=arr.size()-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]<tar){
            start=mid+1;
        }
        else if(arr[mid]>tar){
            end=mid-1;
        }
        else {
            return mid;
        }
   
    }
  return -1;
}

int main(){
     
    int n,tar;
    std::cout<<"Enter size of array: ";
    std::cin>>n;
    
    std::vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        std::cout<<"Enter the value of "<<i+1<<"th element: ";
        std::cin>>arr[i];
         
    }
    std::cout<<"Enter target element to find : ";
    std::cin>>tar;
    std::cout<<std::endl;
    
    std::cout<< binarySearch(arr,tar);
   

return 0;
}