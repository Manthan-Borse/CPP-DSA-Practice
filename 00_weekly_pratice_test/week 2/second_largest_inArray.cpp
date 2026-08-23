#include<iostream>
 #include<climits>
 #include<vector>
 

 int main(){
    int size,max=INT_MIN,second_max=INT_MIN;
    std::cout <<"enter size of array";
    std::cin>>size;
     
    std::vector<int> arr(size);
 
    for(int i=0;i<size;i++){
        std::cout <<"enter "<<(i+1)<<"th  element of array";
        std::cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            second_max=max;
            max=arr[i];
        }else if(arr[i]>second_max && arr[i]!=max){
            second_max=arr[i];
        }
    }
    if(second_max == INT_MIN){
        std::cout << "No second maximum";
    }else{
    std::cout << second_max;
    }
    return 0;
 }