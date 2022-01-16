#include<iostream>
#include<cmath>
using namespace std;

bool isperfect(int number )
{
int sum=1;
for(int i=2;i<sqrt(number);i++)
{
    if(number%i==0)
    {
        if(i==number/i)
        {
        sum+=i;
        }
        else
        {
            sum+=i+number/i;
        }
    }
} 

if(sum==number && number !=1)
{
    return true;
}

   
    return false;


}

int maxsum(int arr[],int n,int k)
{
    int res=0,maxnum=0;
    if(n<k)
{
    cout<<"invalid values";
    return -1;
}
   for(int i=0;i<k;i++)
   {
       res+=arr[i];
   }
  maxnum=res;
   for(int j=k;j<n;j++)
   {
     res+=arr[j]+arr[j-k];
     res=max(res,maxnum);
   }
   return res;
}

int maxnumofperfects(int arr[],int n,int k)
{
    
    for(int i=0;i<n;i++)
    {
        if(isperfect(arr[i]))
        {
          arr[i]=1;
        }
        else{
            arr[i]=0;
        }
    }
    return maxsum(arr,n,k);
}
int main()
{
    int arr[]={28,2,3,6,496,99,8128,24};
   
    cout<<maxnumofperfects(arr,8,4);
    
}