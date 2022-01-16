#include<iostream>
using namespace std;
void Reverse(string s)
{
   if (s.size()==0)
   {
       return;
   }
   string restofstring=s.substr(1);   //s.substr(i)=return string after i;
    Reverse(restofstring);
   cout<<s[0];

}
int main()
{
   Reverse("BINOD");
}