void NextPermutation(std::vector<int>& a){
    int n=a.size();
    int j=n-1;
    for(int i=n-2;i>0;i--){
        if(a[i-1]<a[i]){
            std::swap(a[i-1],a[j]);
        
          
            std::reverse(a.begin()+i,a.end());
            break;
        }
    }
    
}