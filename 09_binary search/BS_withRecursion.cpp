#include<iostream>
#include<vector>

int BS(std::vector<int>arr,int tar,int st,int end){
   if(st<=end){
       int mid= st +(end-st)/2;  
        
             if(arr[mid]<tar){
                      return BS(arr,tar,mid+1,end);
                }
                else if(arr[mid]>tar){
                      return BS(arr,tar,st,mid-1);
                    }
                     else {
                           return mid;
                      }
   
    }
    
  return -1;
}

int main(){
     
    int n,tar,st,end;
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

    st=0;
    end=arr.size()-1;
    
    std::cout<< BS(arr,tar,st,end);
   

return 0;
}