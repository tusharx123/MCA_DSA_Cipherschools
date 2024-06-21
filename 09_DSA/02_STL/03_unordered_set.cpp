// random printing of elements ( no order )
// output gets changed every time

#include<iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set <int> un_set1 = {4,5,3,2,8};
    for(int i: un_set1)
    {
        cout <<i<< " ";
    }
    cout<<endl;

    un_set1.insert(20);
    
    for(int i: un_set1)
    {
        cout <<i<< " ";
    }
}
