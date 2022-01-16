#include<iostream>
using namespace std;
class A{
  
private:
   int age;
public:
  virtual void get(int n)
    {
        age=n;
     cout<<"this is the member of class A  "<<age<<endl;
    }


};
class B: public A
{
    int m;
  void get(int n)
  { m=n;
      cout<<"this is member function of class B "<<m<<endl;
  }

};
int main()
{
 A *a;
 B b;
 a=&b;
a->get(5);

}



