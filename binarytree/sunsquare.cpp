#include<iostream>
using namespace std;
int even(int n)
{
    int eve=0;
    if(n%2==0)
    {
       return 1; 
    }
}
void sumsquare(int l[],int size)
{
    int evensum=0;
    int oddsum=0;
    for(int i=0;i<size;i++)
    {
      if(even(l[i]))
      {
          evensum+=l[i]*l[i];
      }
      else
      {
        oddsum+=l[i]*l[i];   
      }
    }
    cout<<"["<<evensum <<"," <<oddsum<<"]";
    
}
int main()
{
 int l[3]={1,3,5};
 sumsquare(l,3);
}