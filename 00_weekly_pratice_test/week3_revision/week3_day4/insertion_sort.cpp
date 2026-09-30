/*Write:

void insertionSort(int arr[], int n)

for:

int arr[] = {5, 3, 8, 4, 2};

Expected:

2 3 4 5 8

Use the key + shifting approach rather than swapping repeatedly.*/

#include<iostream>

void insertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int key = arr[i];
        int prev = i - 1;

        while(prev >= 0 && arr[prev] > key){
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = key;
    }
}

int main(){
    int arr[] = {5, 3, 8, 4, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr, n);

    for(int i = 0; i < n; i++){
        std::cout << arr[i];
        if(i < n - 1){
            std::cout << ",";
        }
    }
    std::cout << std::endl;

    return 0;
}