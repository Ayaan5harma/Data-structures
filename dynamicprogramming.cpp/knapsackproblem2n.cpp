#include<bits/stdc++.h>
using namespace std;

double fractionalknapsack(int value[],int wgt[],int &knapsack,int size)
{
  vector<pair<double,int> > ans;
 for(int i=0;i<size;i++)
 {
     double x= (value[i]*1.0/wgt[i]*1.0);
     ans.push_back({x,i});
 }
 sort(ans.begin(),ans.end(),greater<pair<double,int>>());
 double finalans=0;
 int check=0;
 for(int i=0;i<ans.size();i++)
 {
     if(check+wgt[ans[i].second]<knapsack)
     {
         finalans+=value[ans[i].second];
         check+=wgt[ans[i].second];
     }
     else{
         double x=(knapsack-check)*1.0;
         finalans+=(x*ans[i].first);
         break;
     }
 }  
return finalans;
}
int main()
{
    int value[]={60,100,120};
    int wgt[]={10,20,30};
    int knapsack=50;
    int size=3;

   cout<< fractionalknapsack(value,wgt,knapsack,size)<<endl;
}