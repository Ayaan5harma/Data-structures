#include<iostream>
#include<stack>
using namespace std;

 int priority(char c)
{
     if (c=='^')
     {
         return 3;
     }
     else if(c=='*' || c=='/')
     {
         return 2;
     }
     else if(c=='+' || c=='-')
     {
         return 1;
     }
     else 
     {
         return 0;
     }
 }
string infixtopostfix(string s)
{
    stack<int> st;
    string res;
   for(int i=0;i<s.size();i++)
   {
       if(s[i]>='0' && s[i]<='9')
       {
            
            res+=s[i];
       }
       else if(s[i]=='(')
       {
          st.push(s[i]);
         
       }
       else if( s[i]==')')
       {
           while(!st.empty() && st.top()!='(')
         {
              res+= st.top();
          st.pop();
         }

          if(!st.empty())
          {
              st.pop();
          }
       }
       else 
       {
           while(!st.empty() && priority(st.top()) > priority(s[i]))
           {
           res+=st.top();
           st.pop();
           }
           st.push(s[i]);
       }
   }
       while(!st.empty())
       {
           res+=st.top();
           st.pop();
       }
       return res;
}
void evaluation(string s)
{
 stack<int> st;
 for(int i=0;i<s.size();i++)
 {
     if(s[i]>='0' && s[i]<='9')
     {
         st.push(s[i]-'0');
     }
     else 
     {
         int n1=st.top();
         st.pop();
         int n2=st.top();
         st.pop();
         switch(s[i])
         {
             case '+':
             st.push(n1+n2);
             break;

             case '-':
             st.push(n1-n2);
             break;

             case '*':
             st.push(n1*n2);
             break;

             case '/':
             st.push(n1/n2);
             break;

             case '^':
             st.push(n1^n2);
             break;
         }
     }
 }
 cout<<st.top()<<endl;


}
   

int main()
{
   string ans=infixtopostfix("(2+3)+(4-6)");
   cout<<ans<<endl;
    evaluation(ans);

}