#include <iostream>
#include <vector>
#include <algorithm>

int majority_element(std::vector<int> arr) {

    std::sort(arr.begin(), arr.end());

    int count = 1;
    int n = arr.size();

    for(int i = 1; i < n; i++) {

        if(arr[i] == arr[i - 1]) {
            count++;
        }
        else {
            count = 1;
        }

        if(count > n / 2) {
            return arr[i];
        }
    }

    return -1;
}

int main() {

    int n;

    std::cout << "Enter the size of array: ";
    std::cin >> n;

    std::vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        std::cout << "Enter the " << i + 1 << "th element of array: ";
        std::cin >> arr[i];
    }

    std::cout << "Majority element: "
              << majority_element(arr);

    return 0;
}