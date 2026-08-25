#include <iostream>
#include <vector>
using namespace std;

int main(){
int arr[] = {1, 2, 3, 4, 5};
//address of value in array   
 cout<<arr<<endl;
 cout<<arr+1<<endl;
 cout<<arr+2<<endl;
 cout<<arr+3<<endl;
 cout<<arr+4<<endl;
 //values in array
 cout<< *(arr)<<endl;
 cout<<*(arr+1)<<endl;
 cout<<*(arr+2)<<endl;
 cout<<*(arr+3)<<endl;
 cout<<*(arr+4)<<endl;
return 0;
}