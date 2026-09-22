#include<iostream>
#include<deque>

int main(){
    std::deque<int> d={2,3,4,5};
    d.push_back(6);
    d.push_front(1);
     d.emplace_back(7);
    d.emplace_front(0);
    for(int val:d){
        std::cout<<val<<" ";
    }
    std::cout<<std::endl;

    //pop back and front 
    d.pop_back();
    d.pop_front();
    std::cout<<"after poping element,d: ";
    for(int val:d){
     std::cout<<val<<" ";
    }
   
//random access
std::cout<<"\n element at index 1 : "<<d[1];
std::cout<<"\n element at index 2 : "<<d[2];
//size of deque
std::cout<<"\n size of deque is  : "<<d.size()<<std::endl;
}