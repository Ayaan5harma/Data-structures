#include<iostream>
using namespace std;

void histogram(int l[],int size)
{
    int freq[40];
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(l[j]<l[i])
            {
                int temp=l[j];
                l[j]=l[i];
                l[i]=temp;
            }
        }
        
    }
    for(int i=0;i<size;i++)
    {
         freq[i]=1;
    }
    for(int i=0;i<size;i++)
    {
        int k=i+1;
        if(l[i]==l[k])
        {
        freq[i]++;
        }
    }
     for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(l[j]<l[i])
            {
                int temp=l[j];
                l[j]=l[i];
                l[i]=temp;
            }
        }
        
    }
   
}
int main()

{
    int l[11]={13,12,11,13,14,13,7,7,13,14,12};
    histogram(l,11);
}
