#include<iostream>
#include<vector>
using namespace std;
int main(){
   int n;
   cout<<"enter number of elements:";
   cin>>n;
   vector<int> vec;
    
   for(int value:vec)
   {
     vec.push_back(value);
   }
   for(int value:vec){
     cout<<value;
    }

return 0;
}
