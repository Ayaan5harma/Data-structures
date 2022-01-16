#include<iostream>
using namespace std;
 int printascend(int n)
 {
     if(n>10)
     {
         return 0;
     }
      cout<<n<<endl;
    return printascend(n+1);
 }
 int printdescend(int n)
 {
     if(n==0)
     {
     return 1;
     }
     cout<<n<<endl;
    return printdescend(n-1);   
 }


int main()
{
printascend(1);
printdescend(10);
}