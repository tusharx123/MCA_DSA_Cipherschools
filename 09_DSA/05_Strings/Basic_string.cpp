//Strings -> String is a collection of characters.
//2 types -> Strings that are objects of string class(STL)
        // C-strings ->


#include<iostream>
using namespace std;

int getLength(char array[])
{
    int count = 0;
    for(int i=0; array[i] != '\0'; i++)
    {
        count += 1;
    }
    return count;
}



int main()
{
    // char str[] = "Hello";
    // char str[] = {'H','e','l','l','o'};
    // char str[100];
    // cout<<"Enter your name: ";
    // // cin>>str;
    // //cout << str<<endl;
    // cin.getline(str,100);
    // cout << str<<endl;
    // char str2[100];
    // cout<<"Enter your name: ";
    // cin.getline(str2,100);
    // cout<<str2;

    // int length = getLength(str);
    // cout<<"The length of the array: "<<length;


    string str3 = "Hello World, How are you";
    cout<< str3.find("World")<<endl;   //position from where the word is starting
    cout<<str3.append("yeah")<<endl;   // adds a string to the end.
    cout<<str3.size()<<endl;           // finds the size of the string.

    string str4 = "Hello Sir";
    string str5 = "Good Job ";
    cout<< str4.insert(6,str5)<<endl;
    
    cout<< *str4.begin()<<endl;
    cout<< *str3.end();

    



}
