#include<iostream>
#include<vector>



int main(){
    int n,count=0 ;
    std::cout<<"enter the size of array:";
    std::cin>>n;
    std::vector<int> arr(n);
    for(int i =0;i<n;i++)
    {
        std:: cout<<"enter the "<<i+1<<"th element of array:";
        std::cin>>arr[i];
    }
    for(int i=0 ; i<n;i++){
        count=0;
        for(int j=0; j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
         
        }if(count>=n/2){
           std::cout << "Majority element: " << arr[i];
            break;
            }
    }
     return 0;
}

