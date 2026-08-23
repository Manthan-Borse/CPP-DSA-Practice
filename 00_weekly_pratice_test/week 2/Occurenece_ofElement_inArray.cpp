#include<iostream>
 #include<climits>
 #include<vector>
 

 int main(){
    int size,target,count=0;
    std::cout <<"enter size of array";
    std::cin>>size;
    std::cout <<"enter target element";
    std::cin>>target;
     
    std::vector<int> arr(size);
 
    for(int i=0;i<size;i++){
        std::cout <<"enter "<<(i+1)<<"th  element of array";
        std::cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            count++;
        }
    }
    if(count==0){
        "element not found";
    }else{
     std::cout<<count;
    }
    return 0;
}