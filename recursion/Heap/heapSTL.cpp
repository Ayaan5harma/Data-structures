#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main()
{
 priority_queue<int , vector<int> > pq;

 pq.push(3);                                    //MAX HEAP
 pq.push(9);
 pq.push(1);
 cout<<pq.top()<<endl;
 pq.pop();
 cout<<pq.top()<<endl;
 
 priority_queue<int ,vector<int> ,greater <int> > pqmin;
pqmin.push(3);                                    //MIN HEAP
 pqmin.push(9);
 pqmin.push(1);
 cout<<pqmin.top()<<endl;
 pqmin.pop();
 cout<<pqmin.top()<<endl;
 
 return 0;

}