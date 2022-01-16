#include<bits/stdc++.h>

using namespace std;
vector<vector<int>> ans;
void permutation(vector<int> arr,int idx)
{
    if(idx==arr.size())
    {
      ans.push_back(arr);
      return;
    }
    for (int i = idx; i < arr.size(); i++)
    {
        swap(arr[i],arr[idx]);
        permutation(arr,idx+1);
        swap(arr[i],arr[idx]);
    }
    return;
    
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    permutation(arr,0);
 
 for(auto one:ans)
   {
       for(auto two:one)
       {
          cout<<two<<" "; 
       }
       cout<<endl;
   }
    
}
