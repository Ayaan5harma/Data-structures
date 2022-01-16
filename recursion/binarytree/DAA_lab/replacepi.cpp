#include<iostream>
using namespace std;

/* void replacepi(string str,int i)
      {
      if(str.length()==0)
      {
          return ;
      }    

    if(str[i]=='p' && str[i+1]=='i')
    {
       cout<<"3.14";
       i++;
    }
    else{
        cout<<str[i];
    }
    replacepi (str,i+1);
    
 } */
 void replacepi(string str)
      {
      if(str.length()==0)
      {
          return ;
      }    

    if(str[0]=='p' && str[1]=='i')
    {
       cout<<"3.14";
       replacepi(str.substr(2));
    }
    else{
        cout<<str[0];
        replacepi (str.substr(1));
    }
    
    
 }

int main()
{
string str;
cin>>str;
/* replacepi(str,0); */
replacepi(str);


}