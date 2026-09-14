#include<iostream>
#include<vector>

double Median(std::vector<int> a , std::vector<int> b){
    
    int n1=a.size();
    int n2=b.size();
    int n=n1+n2;
    int cnt=0;
    int ind1=(n/2)-1;
    int ind2=(n/2);
    int ind1el=-1,ind2el=-1;
    int i=0,j=0;
    while(i<n1 &&j<n2){
        if(a[i]<b[j]){
           if(cnt==ind1){
               ind1el=a[i];
           }
           if(cnt==ind2){
               ind2el=a[i];
           }
           cnt++;
           i++;
        }
        else{
            if(cnt==ind1){
               ind1el=b[j];
           }
           if(cnt==ind2){
               ind2el=b[j];
           }
           cnt++;
           j++;
        }
        
    }
    while(i<n1){
         if(cnt==ind1){
               ind1el=a[i];
           }
           if(cnt==ind2){
               ind2el=a[i];
           }
           cnt++;
           i++;
        }
        
    
    while(j<n2){
        if(cnt==ind1){
               ind1el=b[j];
           }
           if(cnt==ind2){
               ind2el=b[j];
           }
           cnt++;
           j++;
    }
    
    if(n%2==1){
        return ind2el;
    }
    else{
        return (ind1el+ind2el)/2.0;
    }

}
    int main()
    {
        int n1,n2;
        std::cout<<"enter the size of first array:";
        std::cin>>n1;
        std::vector<int> a(n1);
        for(int i=0;i<n1;i++){
            std::cout<<"enter the "<<i+1<<"th element of first array:";
            std::cin>>a[i];
        }
        std::cout<<"enter the size of second array:";
        std::cin>>n2;
        std::vector<int> b(n2);
        for(int i=0;i<n2;i++){
            std::cout<<"enter the "<<i+1<<"th element of second array:";
            std::cin>>b[i];
        }
        double median=Median(a,b);
        std::cout<<"the median is:"<<median<<std::endl;
        return 0;
    
}
    