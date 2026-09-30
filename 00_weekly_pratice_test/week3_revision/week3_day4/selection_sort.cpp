/*Now write the Selection Sort function yourself:

void selectionSort(int arr[], int n)

For:

int arr[] = {5, 3, 8, 4, 2};

Expected output:

2 3 4 5 8

Think in this pattern:

i = 0 → find minimum from 0 to n-1 → put it at index 0
i = 1 → find minimum from 1 to n-1 → put it at index 1
...

Write the complete program like you did for Bubble Sort.*/

#include<iostream>

void selectionSort(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        int SI = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[SI]){
                SI = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[SI];
        arr[SI] = temp;
    }
}

int main(){
    int arr[] = {5, 3, 8, 4, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    selectionSort(arr, n);

    for(int i = 0; i < n; i++){
        std::cout << arr[i];
        if(i < n - 1){
            std::cout << ",";
        }
    }
    std::cout << std::endl;

    return 0;
}