#include<iostream>
using namespace std;
class info
{
	
	char name[30];
public:
	int age;
 char status[50];
 info()      //constructor
 {
 	cout<<"Name of person:";
 	cin>>name;
 	
	cout<<"enter age of person\n";
	cin>>age;
	cout<<"enter person's marriage status\n";
	cin>>status;
 	
 }
 void Sstatus()
 {
 
 	cout<<endl;
 	cout<<"\nperson is:";
 	if(age>60)
 	{
 		cout<<"senior citizen";	
	}
	 else if(age>20&&age<60)
	 {
	 	cout<<"adult";
	 	
	 }
	 else
	 
	 {
	 	cout<<"teenager";
	 }
 }
 
 void display();

 
}p;
 void info::display()    // use of scope resolution operator 
 {
cout<<"\nname of person:"<<name<<"\nage:"<<age<<"\nmarriage status:"<<status;
 	
 }
main()
{

   p.Sstatus();
   p.display();
}
