#include<iostream>
using namespace std;
int power(int n,int p)
{
   if(p==0)
   {
       return 1;
   }
   
   int total=power(n,p-1);
   
   return n*total;



}
int main()
{
    cout<<power(2,6);


}