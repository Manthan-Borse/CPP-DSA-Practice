#include<iostream>
#include<climits>
#include<vector>

int main(){
    int size, element,max =INT_MIN;
    std::cout<<"enter the size of array:";
    std::cin>>size;
    std::vector<int> arr(size);
    for(int i =0;i<size;i++)
    {
        std:: cout<<"enter the "<<i+1<<"th element of array:";
        std::cin>>arr[i];

    }
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    std::cout<<"the maximum element in the array is:"<<max;
    return 0;
}