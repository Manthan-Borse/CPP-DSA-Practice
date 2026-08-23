#include<iostream>
 #include<climits>
 #include<vector>

 

 int main(){
    int n,sum=0,temp=0;
    std::cout <<"enter max element of array";
    std::cin>>n;
   
     
    std::vector<int> arr(n-1);
 
    for(int i=0;i<n-1;i++){
        std::cout <<"enter "<<(i+1)<<"th  element of array";
        std::cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){
        sum+=arr[i];
        
    }
    for(int i=0;i<=n;i++){
        temp+=i;
    }
   std:: cout<<sum<<std::endl;
   std::cout<<temp<<std::endl;
   std::cout<<temp-sum;
return 0;
}