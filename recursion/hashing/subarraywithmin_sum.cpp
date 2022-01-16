#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
void subarrofk(int arr[],int size,int k){
    int sum=0;
    int minsum;
    for(int i=0;i<k;i++){
       sum+=arr[i];
    }
    minsum=sum;
    for(int j=k;j<size;j++){
        sum=sum-arr[j-k];
        sum+=arr[j];
        minsum=min(minsum,sum);
    }
    cout<<minsum;
}
int main(){
    int arr[]={-2,10,1,3,2,-1,4,5};
    int size=8;
    int k=3;
 subarrofk(arr, size,k);
}