#include<bits/stdc++.h>
using namespace std;
int m,n;

int solve(int arr1[], int arr2[],int i,int j,int k)
{
   int choice1(0),choice2(0),choice3(0);
    if( i==m ||  j==n)
    {
        return 0;
    }
    if(arr1[i]==arr2[j])
    {
         choice1= 1+solve(arr1,arr2,i+1,j+1,k);
    }
    if(k>0)
    {
         choice2 =1+ solve(arr1,arr2,i+1,j+1,k-1);
    }
    choice3= max(solve(arr1,arr2,i+1,j,k),solve(arr1,arr2,i,j+1,k));

    return max({choice1,choice2,choice3});
}
int main()
{

cin>>m;
int arr1[m];

for(int i=0;i<m;i++)
{
    cin>>arr1[i];
}

cin>>n;
int arr2[n];
for(int i=0;i<n;i++)
{
   cin>> arr2[i];
}

cout<<solve(arr1,arr2,0,0,1);
}

/* 12345
53142 */