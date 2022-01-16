#include<iostream>
#include<vector>
using namespace std;
 #define vi vector<int> 
 #define rep(i,a,b) for(int i=a;i<b;i++)
 #define  pii pair<int,int>


   // lets code it

void heapify(vi &a,int n,int i)
{
int maxidx =i;
int l= 2*i+1;
int r= 2*i+2;

if(l<n && a[l]>a[maxidx])
{
    maxidx=l;
}
if(r<n && a[r]>a[maxidx])
{
    maxidx=r;
}
                                 
if(maxidx!=i)
{
    swap(a[i],a[maxidx]);
    heapify(a,n,maxidx);
}



}
   void heapsort(vi &a)
   {
      
      int n= a.size();
    for(int i=n/2-1;i>=0;i--)          /// last non leaf node of tree n/2-1//
    {
       heapify(a,n,i);
    }                                           
    for(int i=n-1;i>0;i--)                         
    {                                        // swapping last element with first element and then heapifying //        
        swap(a[0],a[i]);                           
                                                     
        heapify(a,i,0);
    }
   }


 int main()
 {
     int n;
    
     cin>>n;
     
     vi a(n);
     rep(i,0,n)
       cin>>a[i];

       heapsort(a);

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
     
    return 0; 
  }         
       
   /*   
     10                       
    / \   
   15  21    
   / \   \    
  30 18  19  
 */

