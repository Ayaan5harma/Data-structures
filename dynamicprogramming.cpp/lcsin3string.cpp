#include<bits/stdc++.h>
using namespace std;
lcs(string &s1,string &s2,string &s3,int i,int j,int k)   //& for passing by reference jisse alg space na ghire 
{                                             //  memory bchane k liye ow alg alg copy bnti sbki

int x ;
        int y ;
        int z ;
   if(i==0 || j==0 || k==0)
   {
       return 0;
   }

   
    if(s1[i-1]==s2[j-1] && s2[j-1]==s3[k-1])
    {
       return 1+lcs(s1,s2,s3,i-1,j-1,k-1);
    }
    else
    {
         x = lcs(s1,s2,s3,i-1,j,k);
         y = lcs(s1,s2,s3,i,j-1,k);
        z = lcs(s1,s2,s3,i,j,k-1); 
    }
    return max({x,y,z});
}



int main()
{
   
    string s1,s2,s3;
    cin>>s1;
    cin>>s2;
    cin>>s3;
   cout<< lcs(s1,s2,s3,s1.length(),s2.length(),s3.length());
}