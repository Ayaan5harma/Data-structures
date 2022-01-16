#include<iostream>
using namespace std;
 void delchar(char s[] ,char c)
{
	int i=0;
while(i!='\0')
	{
	if(s[i]==c)	
	{
		s[i+1]=s[i];
	}
	i++;
	}
}
int main()
{
	char str[]="banana";
	char p='a';
delchar(str,p );
 cout<<str;

}	

