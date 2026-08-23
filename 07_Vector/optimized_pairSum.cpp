#include<iostream>
#include<vector>

std::vector<int> pairof(std::vector<int>arr, int target_sum ){
   std:: vector<int> ans ;
   int n=arr.size();
   int begin=0,end=n-1;
    while(begin<end)
    {
        if(arr[begin]+arr[end]>target_sum){
            end--;
        }
        else if(arr[begin]+arr[end]<target_sum){
            begin++;
        }
        else if(arr[begin]+arr[end]==target_sum){
            ans.push_back(begin);
            ans.push_back(end);
            return ans;
        }
    }
    return ans;
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

