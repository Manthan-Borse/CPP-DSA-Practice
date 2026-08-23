#include<iostream>
using namespace std;

int main(){

    int A,B,x ;
    cout<<"enter first number"<<endl;
    cin>>A;
    cout<<"enter second nimber"<<endl;
    cin>>B;
    
    cout<<"enter 1 for addition"<<endl;
    cout<<"enter 2 for subtraction"<<endl;
    cout<<"enter 3 for multiplication"<<endl;
    cout<<"enter 4 for division"<<endl;

    cout<<"select your choice :" ;
    cin>>x;

    switch(x){

        case 1:
         {
            cout<< " addition oftwo number is:"<<A+B<<endl;
         }
         break;
         case 2:
         {
            cout<< " subtraction of"<<A<<" and "<<B<<" is "<<A-B<<endl;
         }
         break;
         case 3:
         {
            cout<< " multiplication of "<<A<<" and "<<B<<" is "<<A*B<<endl;
         }
         break;
         case 4:
         {
            cout<< " division of"<<A<<" and "<<B<<" is "<<A/B<<endl;
         }
         break;
    }
return 0;
}