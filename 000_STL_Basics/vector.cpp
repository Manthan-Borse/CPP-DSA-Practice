#include<iostream>
#include<vector>

int main(){
    std::vector<int> v1; // empty vector of integers
    std::vector<int> v2(5); // vector of 5 integers initialized to 0
    std::vector<int> v3(5, 10); // vector of 5 integers initialized to 10
    std::vector<int> v4{1, 2, 3, 4, 5}; // vector initialized with a list of values

    // Displaying the contents of the vectors
    std::cout << "v1: ";
    for(int i : v1) std::cout << i << " ";
    std::cout << "\nv2: ";
    for(int i : v2) std::cout << i << " ";
    std::cout << "\nv3: ";
    for(int i : v3) std::cout << i << " ";
    std::cout << "\nv4: ";
    for(int i : v4) std::cout << i << " ";


    int  size = v4.size(); // getting the size of vector v4
    std::cout << "\nSize of v4: " << size << std::endl;
    int  capacity = v4.capacity(); // getting the capacity of vector v4
    std::cout << "Capacity of v4: " << capacity << std::endl;

    // accessing first and last elements
    std::cout << "First element of v4: " << v4.front() << std::endl;
    std::cout << "Last element of v4: " << v4.back() << std::endl;

    // adding elements to the vector
    v4.push_back(6);
    std::cout << "After adding 6, v4: ";
    for(int i : v4) std::cout << i << " ";

    //emplacing elements in the vector
    v4.emplace_back(7);
    std::cout << "\nAfter emplacing 7, v4: ";
    for(int i : v4) std::cout << i << " ";

    //removing the last element from the vector
    v4.pop_back();    
    std::cout << "\nAfter removing last element, v4: "    ;
    for(int i : v4) std::cout << i << " ";      

    //at method to access elements
    std::cout << "\nElement at index 2 of v4: " << v4.at(2) << std::endl;

    //erase method to remove elements from the vector
    v4.erase(v4.begin() + 1); // erasing the second element
    std::cout << "After erasing second element, v4: ";
    for(int i : v4) std::cout << i << " ";

    //insert method to add elements at a specific position
    v4.insert(v4.begin() + 1, 20); // inserting 20 at the second position
    std::cout << "\nAfter inserting 20 at second position, v4: ";   
    for(int i : v4) std::cout << i << " "; 


    //clear method to remove all elements from the vector
    v4.clear();
    std::cout << "\nAfter clearing v4, size: " << v4.size()<<std::endl; ;
    std::cout << "After clearing v4, capacity: " << v4.capacity()<<std::endl ;
    
    // checking if the vector is empty
    if(v4.empty()){
        std::cout << "v4 is empty" << std::endl;
    } else {
        std::cout << "v4 is not empty" << std::endl;
    }



// resize and add element in vector 4
    v4.resize(5); // resizing v4 to hold 5 elements
    std::cout << "After resizing v4 to 5, size: " << v4.size() << std::endl;
    std::cout << "After resizing v4 to 5, capacity: " << v4.capacity() << std::endl;

    // adding elements to the resized vector
    for(int i = 0; i < 5; ++i){
        v4[i] = i + 1; // assigning values to the elements
    }
    std::cout << "After adding elements, v4: ";
    for(int i : v4) std::cout << i << " ";
// iterating through the vector using iterators
    std::cout << "\nIterating through v4 using iterators: ";
    for(int val:v4){
        std::cout<<val<<" ";
    }
    std::cout<<"\nFirst element of v4 using iterator: ";
    std::cout<<*(v4.begin());
    std::cout<<"\nLast element of v4 using iterator: ";
    std::cout<<*(v4.end()-1);

    //loop usinf iterators
    std::cout<<"\nLooping through v4 using iterators: ";
    std::vector<int>::iterator it;//forward loop using iterator
    for(it=v4.begin();it!=v4.end();it++){
        std::cout<<*it<<" ";
    }

    std::cout<<"\nLooping through v4 using reverse iterators: ";
    std::vector<int>::reverse_iterator rit;//reverse loop using iterator
    for(rit=v4.rbegin();rit!=v4.rend();rit++){
        std::cout<<*rit<<" ";
    }

    // using auto iterator to loop through the vector
    std::cout<<"\nLooping through v4 using auto iterator: ";
    for(auto it=v4.begin();it!=v4.end();it++){
        std::cout<<*it<<" ";
    }
    std::cout<<"\nLooping through v4 using auto reverse iterator: ";
    for (auto it=v4.rbegin();it!=v4.rend();it++){
        std::cout<<*it<<" ";
    }

    
    return 0;
}