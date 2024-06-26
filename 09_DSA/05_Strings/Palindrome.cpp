#include<iostream>
using namespace std;

int main()
{
    string str = "madam";
    bool ispalindrome;
    for(int i=0; i< str.length()/2; i++)
    {
          if(str[i] != str[str.length() - i -1])
          {
                ispalindrome = false;
          }
          else{
                ispalindrome = true;
          }
    }
    
    if(ispalindrome)
    {
        cout<<"String is a palindrome"<<endl;
    }
    else{
        cout<<"String is not a palindrome";
    }
}