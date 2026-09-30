/*Now write:

void bubbleSort(int arr[], int n)

for:

int arr[] = {5, 3, 8, 4, 2};

It should produce:

2 3 4 5 8

Use nested loops and compare adjacent elements.*/

#include<iostream>

void bubbleSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int arr[] = {5, 3, 8, 4, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr, n);

    for(int i = 0; i < n; i++){
        std::cout << arr[i];
        if(i < n - 1){
            std::cout << ",";
        }
    }
    std::cout << std::endl;

    return 0;
}