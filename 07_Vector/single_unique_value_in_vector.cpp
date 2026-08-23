#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int ans=0;
    vector<int>nums;
    int nums= {1};
    for(int value:nums)
    {
        nums.push_back(value);
    }
for(int value:nums)
{
    ans^=value;
}
cout << "The single unique value is: " << ans << endl;
return 0;   
}