#include<iostream>
using namespace std;
  void hcf(int x,int y);
int main()
{
  void hcf(int x,int y)
  {
    int min=(x<y?x:y);
    for(int i=1;i<=x;i++)
    {
      if(x%i==0 && y%i==0)
      {
        cout<<i;
      }
    }
  }
}