#include<iostream>
#include<list>

int main(){
    std::list<int> l1; // creating an empty list
    std::list<int> l2(5, 10); // creating a list with 5 elements, each initialized to 10
    std::list<int> l3(l2); // creating a copy of l2

    // displaying elements of the lists
    std::cout << "l1: ";
    for(int i : l1) std::cout << i << " ";
    std::cout << "\nl2: ";
    for(int i : l2) std::cout << i << " ";  
    std::cout << "\nl3: ";
    for(int i : l3) std::cout << i << " ";
    
    // adding elements to the list..1]front push 2]back push 3]emplace front 4]emplace back
    l1.push_front(5); // adding 5 to the front of l1
    l1.push_back(10); // adding 10 to the back of l1
    l1.emplace_front(3); // adding 3 to the front of l1
    l1.emplace_back(15); // adding 15 to the back of l1

    std::cout << "\nAfter adding elements, l1: ";
    for(int i : l1) std::cout << i << " ";

    // removing elements from the list..1]front pop 2]back pop
    l1.pop_front(); // removing the front element of l1
    l1.pop_back(); // removing the back element of l1


    std::cout << "\nAfter removing elements, l1: ";
    for(int i : l1) std::cout << i << " ";  

    
    int  size = l1.size(); // getting the size of vector l1
    std::cout << "\nSize of l1: " << size << std::endl;
   
    // accessing first and last elements
    std::cout << "First element of l1: " << l1.front() << std::endl;
    std::cout << "Last element of l1: " << l1.back() << std::endl;

    // adding elements to the vector
    l1.push_back(6);
    std::cout << "After adding 6, l1: ";
    for(int i : l1) std::cout << i << " ";

    //emplacing elements in the vector
    l1.emplace_back(7);
    std::cout << "\nAfter emplacing 7, l1: ";
    for(int i : l1) std::cout << i << " ";

    //removing the last element from the vector
    l1.pop_back();    
    std::cout << "\nAfter removing last element, l1: "    ;
    for(int i : l1) std::cout << i << " ";    
    
    //clear method to remove all elements from the list
    l3.clear();
    std::cout << "\nAfter clearing l3, l3: ";
    l3.empty() ? std::cout << "l3 is empty" : std::cout << "l3 is not empty"; // checking if l3 is empty

    //insert method to add elements at a specific position in l1

    l1.insert(l1.begin(),4);
    std::cout<<"\nl1 after inserting, l1: ";
    for(int val: l1){
        std::cout<<val<<" ";
    }
    

return 0;
}