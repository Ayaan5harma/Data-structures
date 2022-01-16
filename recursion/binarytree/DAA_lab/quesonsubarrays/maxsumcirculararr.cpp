#include<iostream>
#include<climits>
using namespace std;
 int kadanes(int arr[],int size)
 {
     int maxsum=0,currsum=0;
     for(int i=0;i<size;i++)
     {
         currsum+=arr[i];
     }
     if(currsum<0)
     {
         currsum=0;
     }
     maxsum=max(maxsum,currsum);
     return maxsum;
 }
void maxcircularsumarr(int arr[],int size)
{
   int wrapsum;
   int nonwrapsum;
   int totalsum=0;
   nonwrapsum=kadanes(arr,size);

   for(int i=0;i<size;i++)
   {                                     //maxsubarraysum=total sum of array - sum of non contributing elements
       totalsum+=arr[i];
       arr[i]=-arr[i];
   }
   wrapsum=totalsum+kadanes(arr,size);                   // + beacuse (- - = +)

   cout<<max(wrapsum,nonwrapsum);
}
int main()
{
 int arr[]={-4,4,-6,6,-10,11,-12};
 maxcircularsumarr(arr,7);
}