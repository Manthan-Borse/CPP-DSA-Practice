#include <iostream>
using namespace std;

int main(){
  int num;
  cout<<"Enter a number: ";
  cin>>num;

  if (num>0){
    cout << num<< ": is a positive number"<<endl;
  }
  else if (num<0){
    cout<<num<<": is an negative number"<<endl;
  }
  else{
    cout<<num<<": is a zero"<<endl;

  }
  return 0;
}