#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main(){
  
 int testcases;
 cin>>testcases;
  vector<vector<int>> v;
  for(int i=0;i<testcases;i++){
      int start,end;
      cin>>start>>end;
      v.push_back({start,end});
  }
/*   now we have to sort according to the endtimes of activity  basically jldi khatam krke dusri pr jana hai
without overlapping*/

sort(v.begin(),v.end(), [&](vector<int> &a ,vector<int> &b){
return a[1]<b[1]; 
});

int takeactivity=1;
int end = v[0][1];

for(int i=1;i<testcases;i++)
{
    if(v[i][0]>end){
        takeactivity++;
        end=v[i][1];
    }
}
 cout<<takeactivity;



}
/*test case
 3
12 15
10 20
20 30 */