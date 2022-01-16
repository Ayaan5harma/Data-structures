#include <bits/stdc++.h>
using namespace std;
 
// Function which computes the sequence
string printSequence(string input,string arr[])
{
    string output="";
 for(int i=0;i<input.length();i++)
 {
    if(input[i]==' ')
    {
        output+='0';
    }
    else{

        int position= input[i]-'A';
        output+=arr[position];
    }

    
 }
 return output;
}
int main()
{
    string arr[]={"2","22","222",
                    "3","33","333",
                    "4","44","444",
                    "5","55","555",
                    "6","66","666",
                    "7","77","777","7777",
                    "8","88","888",
                    "9","99","999","9999"};
    string input="GEEKSFORGEEKS";
    cout<<printSequence(input,arr)<<endl;
}