#include<iostream>
using namespace std;

class Bank
{  private:
   int acn;
   string name;
   long balance;
   
   public:
   void openAccount()
   {
   cout<<"Enter acn:";
    cin>>acn;
    cout<<"Enter Name:";
    cin>>name;
    cout<<"Enter balance :";
    cin>>balance;
   }
   void showAccount()
   {
       cout<<"acn :"<<acn<<endl;
       cout<< "Name :"<<name<<endl;
       cout<<"balance:"<<balance<<endl;
   }
   void Deposit()
   { 
       long amt;
       cout<<"Enter amount to be deposit :";
       cin>>amt;
       balance = balance+ amt;

   }
   void Withdrawal()
   {
       long amt;
       cout<<"Enter amount to be withdrawl :";
       cin>>amt;
       if(balance>=amt)
       {
       balance = balance-amt;
       }
       else
       {
       cout<<" Less Balance...."<<endl;
       }
  }
};
int main()
   {
       Bank P;

       P.openAccount();
       P.showAccount();
       P.Deposit();
       P.showAccount();
       P.Withdrawal();
       P.showAccount();
}
