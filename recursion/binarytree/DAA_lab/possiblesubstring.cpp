#include<iostream>
using namespace std;
void possiblesubstr(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return ;
    }
char ch=s[0];
string ros = s.substr(1);
possiblesubstr(ros,ans+ch);
possiblesubstr(ros,ans);



}
int main()
{
string s;
cin>>s;
possiblesubstr(s,"");
}

