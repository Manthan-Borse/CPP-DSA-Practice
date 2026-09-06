#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

int minEatingSpeed(const std::vector<int>& piles, int h) {
    int low = 1;
    int high = *std::max_element(piles.begin(), piles.end());
    int result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        long long totalHours = 0;
        for (int pile : piles) {
            totalHours += std::ceil((double)pile / mid);
        }
        if (totalHours <= h) {
            result = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return result;
}

int main(){
    int n;
    std::cout << "Enter the number of piles of bananas: ";
    std::cin >> n;
    std::vector<int> piles(n);
    for(int i = 0; i < n; i++){
        std::cout << "Enter the number of bananas in pile " << i+1 << ": ";
        std::cin >> piles[i];
    }
    int h;
    std::cout << "Enter the number of hours: ";
    std::cin >> h;
   std:: cout << "The minimum eating speed to finish all bananas in " << h << " hours is: " << minEatingSpeed(piles, h) << std::endl;
    return 0;
}