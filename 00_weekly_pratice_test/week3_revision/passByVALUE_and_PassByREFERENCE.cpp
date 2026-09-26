/*
Write these two functions:void doubleValue(int x) and void doubleValueRef(int &x)
Make each function multiply x by 2.
Then in main():
int a = 5;
int b = 5;
Call both functions and print a and b. 
*/
#include<iostream>

void doubleValue(int x) {
    x*=2;
}
void doubleValueRef(int &x){
     x*=2;
}
int main(){
    int a = 5;
    int b = 5;
    doubleValue(a);
    doubleValueRef(b);
    std::cout<<a<<" "<<b;

}