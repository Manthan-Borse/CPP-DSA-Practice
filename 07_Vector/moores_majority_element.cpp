#include <iostream>
#include <vector>
#include <algorithm>

int majority_element(std::vector<int> arr) {


    int count = 1,ans=arr[0];
    int n = arr.size();

    for(int i = 1; i < n; i++) {

        if(count == 0) {
            ans=arr[i];
        }
        if (ans==arr[i]){
            count++;
        }
        else{
            count--;
        }
        if(count > n / 2)
        {
            return ans;
        }
    }

    
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
    int count = 1,ans=arr[0];
    

    for(int i = 1; i < n; i++) {

        if(count == 0) {
            ans=arr[i];
        }
        if (ans==arr[i]){
            count++;
        }
        else{
            count--;
        }
        if(count > n / 2)
        {
            std::cout<< "Majority element-"<<ans;
        }
    }

    

    return 0;
}