/*
Now let's implement a very common recursive problem.
Write:int factorial(int n)
such that:factorial(5) = 5 × 4 × 3 × 2 × 1 = 120
Use recursion, not a loop.
*/

#include<iostream>
int factorial(int n){
    if(n==1 || n==0){
        return 1;
    }

    return n*factorial(n-1);
}
int main (){
    int num ;
    std::cout<<"enter number to find its factorial :";
    std::cin>>num;
    int ans= factorial(num);
    
    std::cout<<"the factorial of number "<<num<<"is :"<<ans;
}