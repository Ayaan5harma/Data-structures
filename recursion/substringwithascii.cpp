#include<iostream>
using namespace std;
void substringascii(string s,string ans)
{
if(s.size()==0)
{
cout<<ans<<endl;
return;
}
char ch =s[0];
int code=ch;
string ros=s.substr(1);
substringascii(ros,ans);
substringascii(ros,ans+ch);
substringascii(ros,ans+to_string(code));

}
int main()
{
substringascii("AB","");

}