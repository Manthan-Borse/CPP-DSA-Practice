#include<iostream>
 #include<climits>
 #include<vector>

 

 int main(){
    int size,start,end;
    std::cout <<"enter size of array";
    std::cin>>size;
     
    std::vector<int> arr(size);
 
    for(int i=0;i<size;i++){
        std::cout <<"enter "<<(i+1)<<"th  element of array";
        std::cin>>arr[i];
    }
    start=0;
    end=size-1;
    while(start<end){
      std::swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int val:arr){
        std::cout<<val;
    }
    return 0;
}