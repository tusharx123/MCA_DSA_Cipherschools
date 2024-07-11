#include <iostream>
#include<stack>
#include<cmath>
using namespace std;

int prefix(string s)
{
    stack<int> st;
    for(int i=s.length()-1;i>=0; i--)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            st.push(s[i]-'0');  //converting character to int
        }
        else{
            int operand1 = st.top();
            st.pop();
            int operand2 = st.top();
            st.pop();

            switch(s[i])
            {
                case '+':
                    st.push(operand1 + operand2);
                    break;
                case '-':
                    st.push(operand1 - operand2);
                    break;
                case '*':
                    st.push(operand1 * operand2);
                    break;
                case '/':
                    st.push(operand1 / operand2);
                    break;
                case '^':
                    st.push(pow(operand1,operand2));
                    break;
            }
        }
    }
    return st.top();
}

int main()
{
    string Infixexp = "-+7*45+20";
    int result = prefix(Infixexp);
    cout<<"Infix expression: "<<endl;
    cout<<Infixexp<<endl;
    cout<<"Prefix expression: "<<endl;
    cout<<prefix(Infixexp);
}