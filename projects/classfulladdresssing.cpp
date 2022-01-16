#include<iostream>
#include<string>
using namespace std;

int detectip(string IP)
{
    
char tempstr[4];
   int i=0;
   while(IP[i]!='.')
   {
     tempstr[i]=IP[i];
     i++;
   }
  int ip =stoi(tempstr);
  if(ip>=0 && ip<=127)
  {
      cout<<"the given IP address is belong to A";
  }
  else if (ip>=128 && ip<=191)
  {
     
      cout<<"the given IP address is belong to B";
  }
   else if (ip>=192 && ip<=223)
  {
     
      cout<<"the given IP address is belong to C";
  }
   else if (ip>=224 && ip<=239)
  {
     
      cout<<"the given IP address is belong to D";
  }
    else if (ip>=240 && ip<=255)
  {
     
      cout<<"the given IP address is belong to E";
  }
  else{
      return -1;
  }

  

}
int main()
{
  string IP;
    cout<<"Welcome to the world of IP address......"<<endl;
    cout<<"Enter the IP address which you want to configure"<<endl;
    cin>>IP;
    cout<<"just wait for a sec we are fetching the details.. :)"<<endl;
    detectip(IP);
    
}