#include<bits/stdc++.h>
using namespace std;
                                ///no consecutive one's
int main()
{
    
    int n;
    cin>>n;
  /*   int dp1[n+1];
    int dp0[n+1];
    dp1[1]=1;
     dp0[1]=1;
    for(int i=2;i<n;i++)           (takes more memory)
    {
        dp0[i]= dp0[i-1]+dp1[i-1];
         dp1[i]=dp0[i-1];
    }
    cout<<dp1[n]+dp0[n]; */

    int oldcountzeroes=1;
    int oldcountones=1;
    int newcountzeroes;
    int newcountones;

    for(int i=2;i<=n;i++)
    {
       newcountzeroes=oldcountones+oldcountzeroes;
        newcountones= oldcountzeroes;

        oldcountzeroes=newcountzeroes;
        oldcountones=newcountones;
    }
    cout<<oldcountones+newcountzeroes;
}
