#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
int count_station(std::vector<int>arr,double dist){
    int cnt=0;
    for(int i=0;i<arr.size()-1;i++){
        int station_in_between=(arr[i+1]-arr[i])/dist;
        if((arr[i+1]-arr[i])/dist==station_in_between*dist){
            station_in_between--;
        }

        cnt+= station_in_between;
    }
    return cnt;
}

int minimiseMAXDist(std::vector<int>arr,int k){
   int st=0;
    double end = 0;

for(int i = 0; i < arr.size()-1; i++){
    end = std::max(end, (double)(arr[i+1] - arr[i]));
}

    while (end-st>1e-6){
        double mid = st+(end-st)/2.0;
        int count=count_station(arr,mid) ;
       
        if(count>k){
            st=mid;
        }else{
            end=mid;
        }
    }
return end;

}


int main(){
    
    int n,k;
    std::cout<<"enter the number of gas stations in array:";
    std::cin>>n;
    std::vector<int> arr(n);
    for(int i=0;i<n;i++){
         std::cout<<"enter the "<<i+1<<"th gas station coordinate :";
         std::cin>>arr[i];
    }
    std::cout<<"enter the number of new station you want to add:";
    std::cin>>k;
    double ans=minimiseMAXDist(arr,k);
    std::cout<<ans;

    return 0;

}