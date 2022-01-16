#include<iostream>
#include<iomanip>
using namespace std;

class Shape
{
    public:
    int pi=3.14;
 virtual void display()=0;
};
class cone :public Shape
{
   /*  cone(int r,int h)
    {
       int radius =r;
       int height= h;
    } */
    public:
 double volume_of_cone;
    float volume(int r,int h)
    {
        volume_of_cone= (pi*r*r*h)/3;
      return volume_of_cone;
       
    }
   void display()
   {
       cout<<"volume of cone"<<volume_of_cone<<endl;
   }


};
class sphere :public Shape
{
/* sphere(int r)
{
    int radius =r;
} */

double volume_of_sphere;
public:
float volume(int r)
{
     volume_of_sphere=(pi*r*r*r)*4/3;
  return volume_of_sphere;
}
void display()
{
    cout<<"volume of sphere"<<volume_of_sphere<<endl;
}
};

int main()
{
Shape* v1,*v2;
cone vc;
sphere vs;
vc.volume(3,3);
vs.volume(3);
v1=&vc;
v2=&vs;;
v1->display();
v2->display();


 

}