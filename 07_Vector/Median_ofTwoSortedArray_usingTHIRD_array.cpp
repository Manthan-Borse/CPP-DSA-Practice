#include<iostream>
#include<vector>

double Median(std::vector<int> a , std::vector<int> b){
    std::vector<int> c;
    int n1=a.size();
    int n2=b.size();
    int i=0,j=0;
    while(i<n1 &&j<n2){
        if(a[i]<b[j]){
            c.push_back(a[i]);
            i++;
        }
        else{
            c.push_back(b[j]);
            j++;
        }
    }
    while(i<n1){
        c.push_back(a[i]);
        i++;
    }
    while(j<n2){
        c.push_back(b[j]);
        j++;
    }
    int n=n1+n2;
    if(n%2==1){
        return c[n/2];
    }
    else{
        return (c[n/2]+c[n/2-1])/2.0;
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
    