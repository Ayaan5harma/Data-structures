#include<iostream>
using namespace std;
int  sum(int n)
{
    if(n==0)
    {
        return 0;
    }

 int total= n+ sum(n-1);
 return total;


}
int main()
{
  cout<<sum(7);
}