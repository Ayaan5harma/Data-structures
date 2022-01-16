
#include<bits/stdc++.h>
using namespace std;
 /*BRUTE FORCE APPOACH
/* string subsequence(string ans,int start,int n,string s1)
{
    if(start==n)
    {
        return ans;
    }                                                   ///finding  
    subsequence(ans,start+1,n,s1);                   ///all
                                                ////subsequence
    ans+=s1[start];            
    subsequence(ans,start+1,n,s1);

} */
/* int lcs(string s1,string s2)
{
 string ans1= subsequence(" ",0,s1.length(),s1);
 string ans2= subsequence(" ",0,s2.length(), s2);
 string ans3="";

 int i=0;
 int j=0;
 while(i<ans1.length() && j<ans2.length())
 {
     if(ans1[i]==ans2[j])
     {
         ans3+=ans1[i];
     }

 }
 return ans3.length();
} */


int lcs(string s1,string s2,int m,int n)
{

   int x;
   int y;
   if(m==0 || n==0)
   {
       return 0;
   }
   if(s1[m-1]==s2[n-1])
   {
       return 1+lcs(s1,s2,m-1,n-1);

   }
   else{
       x= lcs(s1,s2,m-1,n);
       y=lcs(s1,s2,m,n-1);
   }
   return max(x,y);

}
int main()
{

string s1,s2;

    cin>>s1;


    cin>>s2;
    int m=s1.length();
    int n=s2.length();

cout<<lcs(s1,s2,m,n);
}