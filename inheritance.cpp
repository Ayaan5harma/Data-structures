#include<iostream>
using namespace std;
class A{
  
private:
   int age;
public:
   void print(int n)
    {
        age=n;
     cout<<"this is the member of class A  "<<age<<endl;
    }


};
class B: public A
{
    int m;
    public:
  void get(int n)
  { 
      m=n;
      cout<<"this is member function of class B "<<m<<endl;
  }

};
int main()
{

 B b;
b.print(5);

}



