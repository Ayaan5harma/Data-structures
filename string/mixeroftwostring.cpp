#include <bits/stdc++.h>
using namespace std;
 
// Returns true if C is an interleaving of A and B,
// otherwise returns false
bool isInterleaved (string A, string B, string C)
{
  
  if(C.size()!=A.size()+B.size())
  {
    return false;
  }
  
 string ans=A+B;
  bool flag=false;
  for(int i=0;i<ans.size();i++)
  {
   for(int j=0;j<C.size();j++)
   {
       if(ans[i]==C[j])
       {
           flag=true;
       }
       
   }


}
if(flag==true)
{
    return true;
}
else{
    return false;
}
}
int main()
{
    string A = "AB";
    string B = "CD";
    string C = "ACBG";
    if (isInterleaved(A, B, C) == true)
        cout << C << " is interleaved of " << A << " and " << B;
    else
        cout << C << " is not interleaved of " << A << " and " << B;
 
    return 0;
}