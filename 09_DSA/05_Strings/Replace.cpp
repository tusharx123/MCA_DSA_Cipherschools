#include<iostream>
using namespace std;

void replace(string &s)
{
    for(int i=0;i<s.length();i++)
    {
        if(s[i] ==' ')
        {
            s.replace(i,1,"@9");
            i+=1;
        }
        
    }
}
int main()
{
    string str = "Hello World";
    replace(str);
    cout<<str;
}