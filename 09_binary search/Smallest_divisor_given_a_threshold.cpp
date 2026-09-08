#include<iostream>
#include<vector>
#include<algorithm>

int smallestDivisor(const std::vector<int>& nums, int threshold) {
    int st =1;
    int end = *max_element(nums.begin(), nums.end());
    int ans = -1;
    while(st <= end) {
        int mid=st + (end - st) / 2;
        long long sum = 0;
        for(int num : nums) {
            sum += (num + mid - 1) / mid; 
        }
        if(sum <= threshold) {
            ans = mid;
            end = mid - 1;
        } else {
            st = mid + 1;
        }
    }
    return ans;
}int main() {
    int n, threshold;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    std::vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> nums[i];
    }
    std::cout << "Enter the threshold: ";
    std::cin >> threshold;

    int result = smallestDivisor(nums, threshold);
    if(result != -1) {
        std::cout << "The smallest divisor is: " << result << std::endl;
    } else {
        std::cout << "No valid divisor found." << std::endl;
    }
    return 0;
}