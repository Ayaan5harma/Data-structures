#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> coinarr={1,2,5,10,20,50,100,200,500,2000};

void coinchange(int value){
  sort(coinarr.begin(),coinarr.end() , greater <int> ());

  int tempvalue=0;
 for(int i=0;i<coinarr.size();i++){

     if(value>=coinarr[i]){

     
     while(value>=coinarr[i])
   {
        tempvalue+=coinarr[i];
        cout<<coinarr[i]<<" "<<"+ ";
        value=value-coinarr[i];
 }
 }

 }
}

int main(){
    int value;
    cin>>value;

    coinchange(value);

}