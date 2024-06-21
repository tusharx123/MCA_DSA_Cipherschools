//Set -> 1. Unique elements - no two elements in a set can be equal.
// 2. Immutable - we can add or remove elements from the set but we can't change the values of existing element.
//3. sorted order - by default order is increasing but we have an option to change that. 

#include <iostream>
#include <set>
using namespace std;
int main()
{
    //for ascending order
    set<int> set1 = {3,8,1,4,9};
    for(int i: set1)
    {
        cout<< i << " ";
    }
    cout<<endl;

    //for descending order
    set<int, greater<int>> set2 = {3,8,1,4,9};
    for(int i: set2)
    {
        cout<< i << " ";
    }
    cout<<endl;
    set1.insert(5);
    cout<<set1.size();
    return 0;

}