#include<iostream>
#include<vector>

std::vector<int> pairof(std::vector<int>arr, int target_sum ){
   std:: vector<int> ans ;
   int n=arr.size();
    for(int i =0; i<n;i++){
        for(int j=i+1; j<n ; j++){
            if(arr[i]+arr[j]==target_sum){
                ans.push_back(i);
                ans.push_back(j);
             return ans;
            }
        }
        return ans;
    }
    
}
int main(){
    int n ,target_sum;
    std::cout<<"enter the size of array:";
    std::cin>>n;
    std::vector<int> arr(n);
    for(int i =0;i<n;i++)
    {
        std:: cout<<"enter the "<<i+1<<"th element of array:";
        std::cin>>arr[i];
    }
    std::cout<<"enter the target sum:";
    std::cin>>target_sum;
   std::vector<int> ans = pairof(arr, target_sum);
   std::cout<<"Indices: "<<ans[0]<<" "<<ans[1]<<std::endl;
    return 0;
    }

