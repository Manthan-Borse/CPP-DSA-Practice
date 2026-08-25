#include<iostream>
#include<vector>




int main(){
    int n;
    std::cout<<"enter the size of array:";
    std::cin>>n;
    int arr[n];
   for(int i=0;i<n;i++)
   {
    std::cout<<"Enter the "<<i+1<<"th element of the array: ";
    std::cin>>arr[i];
  }
    int*ptr=arr;

    for(int i=0;i<n;i++){
        std::cout<<*(ptr+i)<<" ";

    }
    std::cout<<std::endl;
     int*ptr2=&arr[n-1];
     for(int i=0;i<n;i++){
        std::cout<<*(ptr2 -i)<<" ";

    }
}