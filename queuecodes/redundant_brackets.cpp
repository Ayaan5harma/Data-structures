#include<iostream>
#include<stack>
using namespace std;
int redundant_check(string s)
{
    stack<char> st;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='+' ||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='{')
        {
            st.push(s[i]);
        }
        else if (!st.empty() && s[i]=='}' && (st.top()=='+' ||st.top()=='-'||st.top()=='*'||st.top()=='/'))
        {
           st.pop();
           st.pop();
        }
         if(s[i]=='}' && st.top()=='{')
        {
            return 0;
            break;
        }
        else 
        {
            return 1;
        }
        

    }
}
int main()
{
   cout<<redundant_check("(a+(a+b))");

}