#include<iostream>
#include<climits>
#include<vector>

int main(){
    int size;
    std::cout<<"enter the size of array:";
    std::cin>>size;
    std::vector<int> arr(size);
    for(int i =0;i<size;i++)
    {
        std:: cout<<"enter the "<<i+1<<"th element of array:";
        std::cin>>arr[i];

    }
    for(int i=0;i<size-1;i++)
    {
        if(arr[i]<arr[i+1])
        {
            if(arr[size-2]<arr[size-1]){
            std::cout<<"the array is  sorted in ascending order";
            break;
            }else{
                 std::cout<<"the array is not sorted in ascending order";
            }
        
        
        }
    }
        

        
    
    return 0;
}