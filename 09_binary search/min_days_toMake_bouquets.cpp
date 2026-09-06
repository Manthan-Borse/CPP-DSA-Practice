#include<iostream>
#include<vector>
#include<algorithm>

int minDays(const std::vector<int>& bloomDay, int m, int k) {
    int n = bloomDay.size();
    if (1LL * m * k > n){
        return -1;
    }
    int low = *std::min_element(bloomDay.begin(), bloomDay.end());
    int high = *std::max_element(bloomDay.begin(), bloomDay.end());
    int result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        int bouquets = 0, flowers = 0;

        for (int day : bloomDay) {
            if (day <= mid) {
                flowers++;
                if (flowers == k) {
                    bouquets++;
                    flowers = 0;
                }
            } else {
                flowers = 0; // Reset flower count if the flower hasn't bloomed
            }
        }

        if (bouquets >= m) {
            result = mid;
            high = mid - 1; // Try to find a smaller number of days
        } else {
            low = mid + 1; // Need more days
        }
    }
    return result;
}

int main(){
    int n, m;
    std::cout << "Enter the number of flowers: ";
    std::cin >> n;
    std::vector<int> bloomDay(n);
    for(int i = 0; i < n; i++){
        std::cout << "Enter the bloom day for flower " << i+1 << ": ";
        std::cin >> bloomDay[i];
    }
    std::cout << "Enter the number of bouquets to make: ";
    std::cin >> m;
    int k;
    std::cout << "Enter the number of flowers in each bouquet: ";
    std::cin >> k;

    // Call the function to calculate minimum days to make bouquets
    int result = minDays(bloomDay, m, k);
    if(result != -1){
        std::cout << "The minimum number of days to make " << m << " bouquets is: " << result << std::endl;
    } else {
        std::cout << "It is not possible to make " << m << " bouquets with the given bloom days." << std::endl;
    }

    return 0;
}