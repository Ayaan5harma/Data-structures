#include<iostream>
using namespace std;
void strly(int l[],int size)
    {
        int check=1;
        int integer[size-1];
    for(int i=0;i<size-1;i++)
    {
    	if(l[i+1]>l[i])
    	{
     integer[i]= l[i+1]-l[i];
 }
 else
 {
 	   integer[i]= l[i]-l[i+1];
 }

    }
    
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size-1;i++)
        {
            if(integer[i]>integer[j])
            {
                check=0;
            }
        }
    }
    if(check==1)
    {
     cout<<"true";
    }
    else
    {
    cout<<"false";
    }
 }
 int main()
{
   
    int k[5]={1,3,7,2,9};
    strly(k,5);
}


