#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>

int main(){
    int size,start,end;
    std::cout<<"enter the size of array:";
    std::cin>>size;
    std::vector<int> arr(size);
    for(int i =0;i<size;i++)
    {
        std:: cout<<"enter the "<<i+1<<"th element of array:";
        std::cin>>arr[i];
    }
    start=0;
    end=size-1;
    for(int i=0;i<size;i++)
    {
        std::swap(arr[start],arr[end]);
        start++;
        end--;
        if(start>=end)
        {
            for(int i =0;i<size;i++)
              {
                 std::cout<<arr[i];
                 
              }  
              break;
        }
    }
  return 0;
}