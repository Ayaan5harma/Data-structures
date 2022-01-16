#include<iostream>
using namespace std;
void gcd(int n1,int n2)
{
    int ans;
   while(n2!=0)
    {
  ans=n1%n2;
  n1=n2;
  n2=ans;
    }
    
cout<<n1;
}
int main()
{
    gcd(42,24);
}