#include <bits/stdc++.h>
using namespace std;
 
string removeDuplicate(string str, int n)
{
   sort(str.begin(),str.end());
   string ans =" ";

   for(int i=0;i<n;i++)
   {
       if(str[i]!=str[i+1])
       {
          ans+=str[i];
       }
   }
   return ans;
}
int main()
{
   char str[]= "geeksforgeeks";
   int n = strlen(str);
   cout << removeDuplicate(str, n);
   return 0;
}