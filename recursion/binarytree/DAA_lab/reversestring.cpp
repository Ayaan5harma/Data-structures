#include<iostream>
using namespace std;
/*  void strrev(string str,int i)
 {
  /*    if(str[i]=='\0')
     {
         return ;
     }
     strrev(str,i+1);
     cout<<str[i]; 
 } */
void strrev(string str)
      {

     if(str.length()==0)
     {
         return ;
     }
     string ros = str.substr(1);
     strrev(ros);
     cout<<str[0];
 }
int main()
{
string str;
cin>>str;
strrev(str);

}