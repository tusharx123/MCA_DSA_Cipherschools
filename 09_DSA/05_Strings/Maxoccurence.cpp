#include<iostream>
using namespace std;

int  max_occurence(string s, char c)
{
    int count =0;
    for(int i=0; i< s.length(); i++)
    {
        if(s[i]==c)
        {
            count+=1;
        }
    }
    return count;
}
int main()
{
    string str = "lololololol llololo";
    char c = 'l';
    int count = max_occurence(str,c);
    cout<<"Maximum occurence of "<<c<< " is "<<count;

}