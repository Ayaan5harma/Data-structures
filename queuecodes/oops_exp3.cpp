#include<iostream>
using namespace std;
class A
{
public:                  //private members cant be inherited//
int a=45;
};
class B : private A{
    
int b=90;
public:
  friend void faster(B);
};
void  faster(B num)
{
 if(num.b>num.a)
 {
     cout<<num.b<<" is greater than "<<num.a<<endl;
 }
 else{
       cout<<num.a<<" is greater than "<<num.b<<endl;
 }
 
}
int main()
{
class B num;
faster(num);
}

