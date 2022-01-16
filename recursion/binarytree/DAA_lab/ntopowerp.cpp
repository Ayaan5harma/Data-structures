#include<bits/stdc++.h>
using namespace std;
int ntopowerp(int n,int p)
{
   if(p==0)
   {
       return 1;
   }
    int prevpower=ntopowerp(n,p-1);
    return n*prevpower;

    
}
int main()
{
int n,p;
cin>>n;
cin>>p;
cout<<ntopowerp(n,p);
}