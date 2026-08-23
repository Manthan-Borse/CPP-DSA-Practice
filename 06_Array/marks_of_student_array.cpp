#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number of students: ";
    cin>>num;
    int marks[num];
    for(int i=0;i<num;i++)
    {
        cout<<"enter the marks of "<<i+1<<"th student:";
        cin>>marks[i];
    }
    for(int i=0;i<num;i++)
    {
        cout<<" the marks of "<<i+1<<"th student is :"<<marks[i]<<endl;
    }
    return 0;
}