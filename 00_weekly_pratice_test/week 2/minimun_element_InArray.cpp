 #include<iostream>
 #include<climits>
 

 int main(){
    int size,min=INT_MAX;
    std::cout <<"enter size of array";
    std::cin>>size;
    int arr[size];
 
    for(int i=0;i<size;i++){
        std::cout <<"enter "<<(i+1)<<"th  element of array";
        std::cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    std::cout <<min;
    return 0;
 }