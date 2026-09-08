#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>

int reqdays(const std::vector<int>& weights, int capacity) {
    int days = 1;
    int currentLoad = 0;
    for (int weight : weights) {
        if (currentLoad + weight > capacity) {
            days++;
            currentLoad = weight;
        } else {
            currentLoad += weight;
        }
    }
    return days;
}
int BS(const std::vector<int>& weights, int D) {
    int st=*std::max_element(weights.begin(), weights.end());
    int end = std::accumulate(weights.begin(), weights.end(), 0);
    int ans = -1;
    while (st<=end)
    {
        int mid = st + (end - st) / 2;
       
        
        if (reqdays(weights,mid) <= D) {
            ans = mid;
            end = mid - 1;
        } else {
            st = mid + 1;
        }
    }
    return ans;
}
int main() {
    int n, D;
    std::cout << "Enter the number of packages: ";
    std::cin >> n;
    std::vector<int> weights(n);
    for (int i = 0; i < n; i++) {
        std::cout << "Enter the weight of package " << i + 1 << ": ";
        std::cin >> weights[i];
    }
    std::cout << "Enter the number of days to ship all packages: ";
    std::cin >> D;

    int result = BS(weights, D);
    if (result != -1) {
        std::cout << "The least capacity required to ship all packages in " << D << " days is: " << result << std::endl;
    } else {
        std::cout << "It is not possible to ship all packages in " << D << " days." << std::endl;
    }
    return 0;
}