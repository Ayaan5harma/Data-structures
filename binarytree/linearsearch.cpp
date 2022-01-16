#include<iostream>
#include<stdlib.h>
using namespace std;

int main()

{
    int num,n;
    int arr[num];
cout<<"enter how many number you want to enter"<<endl;
cin>>num;
for(int i=0;i<num;i++)
{
    cin>>arr[i];

}
cout<<"enter which number you want to search"<<endl;
cin>>n;
for(int i=0;i<num;i++)
{
    if(arr[i]==n)
    {
        cout<<"numeber found"<<endl;
        cout<<"it is at index" <<i+1;
    }
   
    
}


}
