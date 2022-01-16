


#include<bits/stdc++.h>
#include<vector>
using namespace std;

int numberofnotes(int arr[],int money ,int size)
{
   int ans=0;
    
vector<int> vi(size);
for(int i=0;i<size;i++)
{
vi.push_back(arr[i]);
}
sort(vi.begin(),vi.end(),greater<int>());
for(int j=0;j<size;j++)
{
    
ans+=money/arr[j];
money=money-money/arr[j]*arr[j];

}
return ans;
}
int main()
{
    int arr[]={2000,500,100,200,50,5,10,2,1,20};
    cout<< numberofnotes(arr,54,10);
}
