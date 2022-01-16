#include<iostream>
using namespace std;
 void removedup(string s)
 {
     if(s.size()==0)
     {
         return;
     }
     if(s[0]==s[1])
     {
         removedup(s.substr(1));
     }
     else{
         cout<<s[0];
         removedup(s.substr(1));
     }

 }
int main()
{
    string s;
    cin>>s;
    removedup(s);
}