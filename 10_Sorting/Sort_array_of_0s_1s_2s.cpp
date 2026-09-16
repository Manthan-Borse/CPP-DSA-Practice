#include <iostream>
#include <vector>

void sort(std::vector<int>& arr) {
  int count_0 = 0, count_1 = 0, count_2 = 0;
  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] == 0) {
      count_0++;
    } else if (arr[i] == 1) {
      count_1++;
    } else if (arr[i] == 2) {
      count_2++;
    }
  }
  int i = 0;
  while (count_0 > 0) {
    arr[i++] = 0;
    count_0--;
  }
  while (count_1 > 0) {
    arr[i++] = 1;
    count_1--;
  }
  while (count_2 > 0) {
    arr[i++] = 2;
    count_2--;
  }

}

int main(){
    
    std::cout<<"Enter the size of the array: ";
    int x;
    std::cin>>x;
    std::vector<int>arr(x);
    std::cout<<"Enter the elements of the array: ";
    for(int i=0;i<x;i++){
        std::cin>>arr[i];
    }
    sort(arr);
    std::cout<<"Sorted array is: ";
    for(int i=0;i<x;i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}