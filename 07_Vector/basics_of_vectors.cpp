#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int size,element,index,new_element;
    cout<<"enter size of array:";
    cin>>size;
    vector<int> vec;
    for(int i=0;i<size;i++)
    {
        cout<<"enter element:";
        cin>>element;
        vec.push_back(element);

    }
    for(int value:vec)
    {
        cout<<value<<" ";
    }
    cout<<endl;
    cout<<"size:"<<vec.size();
    cout<<endl;
    cout<<"first element:"<<vec.front();
    cout<<endl;
    cout<<"last element:"<<vec.back();
    cout<<endl;

    cout<<"print element at particular index:";
    cin>>index;
    cout<<vec[index];
cout<<endl;
    cout<<"change value of particular index:";
    cout<<endl;
    cout<<"enter index:";
    cin>>index;
    cout<<endl;
    cout<<"enter new value :";
    cin >> new_element;
cout<<endl;
    vec[index]=new_element;
    for(int value:vec)
    {
        cout<<value<<" ";

    }
cout<<endl;
    cout<< "enter new element in array:";
    cin>>new_element;
    vec.push_back(new_element);
cout<<endl;
for(int value:vec)
    {
        cout<<value<<" ";
    }
    cout<<endl;

    cout<<"remove last element ";
     vec.pop_back();
cout<<endl;
    for(int value:vec)
    {
        cout<<value<<" ";
    }


    




  

}
