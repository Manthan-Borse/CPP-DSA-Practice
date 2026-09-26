#include<iostream>

void moveZeros(int arr[], int n){
    
    for(int i=0;i<n;i++){
        if(arr[i]==0){
        for(int j=i;j<n;j++){
            
            if(arr[j]!=0){
                arr[i]=arr[j];
                arr[j]=0; 
                break;              

            }
        }
        
    }
}
}

int main(){
    int arr[] = {0, 1, 0, 3, 12};
    int n=sizeof(arr)/sizeof(arr[0]);
    moveZeros(arr,n);
    for(int i=0;i<n;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;

  
    

}