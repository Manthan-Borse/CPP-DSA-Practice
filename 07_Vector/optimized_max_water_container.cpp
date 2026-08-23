#include<iostream>
#include<vector>
#include<climits>



int main(){
    int n,max_water=0,lp,rp;
    std::cout<<"enter the size of array:";
    std::cin>>n;
    std::vector<int> arr(n);
    for(int i =0;i<n;i++)
    {
        std:: cout<<"enter the "<<i+1<<"th element of array:";
        std::cin>>arr[i];
    }
    lp=0;
    rp=n-1;
    while (lp<rp)
    {

        int wt= rp-lp;
       int  ht=std::min(arr[lp],arr[rp]);
        int area=wt*ht;
        max_water=std::max(max_water,area);
         arr[lp]<arr[rp]?lp++:rp--;
    }
   
    std:: cout <<max_water<<std::endl;
}
    