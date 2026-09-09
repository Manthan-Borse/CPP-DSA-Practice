#include<iostream>
#include<vector>

  int findKthPositive(std::vector<int> arr, int k) {
        int st=0;
        int n= arr.size();
        int end = n-1;
        if(n==0){
            return k;
        }
        while(st<=end){
           int  mid=st+(end-st)/2;
           int  missing=arr[mid]-(mid+1);
            if(missing<k){
                st=mid+1;

            }else{
                end=mid-1;
            }
           
        } 
         return st+k;
    }

int main() {
    int n, k;
    std::cout << "Enter the size of array: ";
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cout << "Enter the element " << i + 1 << ": ";
        std::cin >> arr[i];
    }
    std::cout << "Enter the number of missing integers: ";
    std::cin >> k;

    int result = findKthPositive(arr, k);
    if (result != -1) {
        std::cout << "The " << k << "th missing positive integer is: " << result << std::endl;
    } else {
        std::cout << "It is not possible to find the " << k << "th missing positive integer." << std::endl;
    }
    return 0;
}