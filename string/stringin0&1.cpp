#include<bits/stdc++.h>
using namespace std;
 

int maxSubStr(string &str, int n)
{
    int count0 =0,count1=0,ans=0;

    for(int i=0;i<n;i++)
    {
        if(str[i]=='1')
        {
            count1++;
        }
        else{
            count0++;
    }
    if(count0==count1)
    {
ans++;
    }

    }
    if(count1!=count0)
    {
        return -1;
    }
    else{
        return ans;
    }
}
    int main()
{
    string str = "0100110101";
    int n = str.length();
 
    cout << maxSubStr(str, n);
 
    return 0;
}

