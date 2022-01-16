#include<bits/stdc++.h>
using namespace std;
void printdesc(int n)
{

if(n==1)
{
    cout<<"1"<<endl;
    return ;
}
cout<<n<<" ";
 printdesc(n-1);


    
}
void printasc(int n)
{

if(n==1)
{
    cout<<"1"<<endl;
    return ;
}

  printasc(n-1);
  cout<<n<<" ";   
}
int main()
{
int n;
cin>>n;

cout<<printdesc(n);
cout<<endl;
cout<<printasc(n);
}