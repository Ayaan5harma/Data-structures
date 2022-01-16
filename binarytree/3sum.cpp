#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{

int n; cin>>n;
  vector<int> v(n);
  bool found=false;
for(auto &i:v)
{
    cin>>i;
}
int target;cin>>target;
sort(v.begin(),v.end());
    
    for(int i=0;i<n;i++)
    {
        int low=i+1; int high=n-1;
        while(low<high)
       { 
           int current = v[i]+v[low]+v[high];
           if(current == target)
           {
               found=true;
           }
           if(current<target)
           {
              low++;
           }
           else
           {

        high--;
           }

       }
    }
    if(found)
    {
        cout<<"true";
    }
    else{
        cout<<"false";
    }
	
}