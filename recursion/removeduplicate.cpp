#include<iostream>
using namespace std;
string removedup(string s)
{
    if(s.length()==0)
    {
        return "" ;
    }
    char ch=s[0];
    string ans=removedup(s.substr(1));
if(ch==ans[0])
{
    return ans;
}
return (ch+ans);   
}
int main()
{
   cout<<removedup("aaaabbbcccdddeee");
  
}

/*   
int main()
{

    string s={"aaaabbbcccdddeee"};
    int len=s.size();
 for(int i=0;i<len;i++)                          W
                                                 I
 {                                               T
     for(int j=i+1;j<len;j++)                    H
     {                                           O
         if(s[i]==s[j])                          U
         {                                       T
             for(int k=j;k<len;k++)              R
             {                                   E
                 s[k]=s[k+1];                    C
             }                                   U
             len--;                              R
             j--;                                S
         }                                       S
     }                                           I
                                                 O
                                                 N
 } 
  
cout<<s;
} */