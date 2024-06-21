//STL - Standard template library - provides a set of programming tools to implement algorithm and sata structures like vectors, list, queue etc
// vector is not index based.
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> num={1,2,3,4};

    //add at last
    num.push_back(10);

    //access
    cout<<"Element at position 0 is: "<< num.at(0)<<endl;

    // change
    num.at(2) = 50;

    //delete the last element
    num.pop_back();

    //iterator: They are used to point to the memory address of a vector element, they somehow act like pointers
    vector<int> :: iterator itr;
    itr = num.begin();
    cout<<*itr<<endl; // prints the first element 
    itr = num.begin() +1;
    cout<<*itr<<endl; // prints the second element (1st method)
    cout<<*(itr+1)<<endl; //prints the next element(2nd method)
    
    for(int item : num)
    {
        cout<< item <<" ";
    }
    
}