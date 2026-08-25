#include<iostream>
#include<vector>



void swap(int* a, int* b){
    int temporary = *a;
    *a = *b;
    *b = temporary;
}
int main(){
    int n;
    std::cout<<"enter the size of array:";
    std::cin>>n;
    std::vector<int> arr(n);
    for(int i =0;i<n;i++)
    {
        std:: cout<<"enter the "<<i+1<<"th element of array:";
        std::cin>>arr[i];
    }
    int start=0;
    int end=n-1;
    while(start<end){

        swap(&arr[start], &arr[end]);
        start++;
        end--;
    }
     
for(int value:arr)
    {
        std::cout<<value<<" ";
    }

    return 0 ;
}