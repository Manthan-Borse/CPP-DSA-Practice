#include<iostream>
#include<vector>

void MergeArray(std::vector<int>&a,std::vector<int>&b,int m,int n,int M){
    int i=m-1;
    int j=n-1;
    int indx=M-1;
    while(i>=0 && j>=0){
        if(a[i]>b[j]){
            a[indx]=a[i];
            i--;
            indx--;
        }
        else{
            a[indx]=b[j];
            j--;
            indx--;
        }
        
    }
    while(j>=0){
        a[indx]=b[j];
        j--;
        indx--;
    }
   
}

int main(){
    std::cout<<"Enter the size of the first array: ";
    int x;
    std::cin>>x;
    std::vector<int>arr1(x);
    std::cout<<"Enter the elements of the first array: ";
    for(int i=0;i<x;i++){
        std::cin>>arr1[i];
    }
    std::cout<<"Enter the size of the second array: ";
    int y;
    std::cin>>y;
    std::vector<int>arr2(y);
    std::cout<<"Enter the elements of the second array: ";
    for(int i=0;i<y;i++){
        std::cin>>arr2[i];
    }
    
    arr1.resize(x+y);
    
    MergeArray(arr1,arr2,x,y,x+y);
    
     std::cout<<"Merged array is: ";
    for(int i=0;i<x+y;i++){
        std::cout<<arr1[i]<<" ";
}
}