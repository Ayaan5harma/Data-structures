#include<iostream>
using namespace std;

void printsubsequence(string input, string output)
{
    if(input.empty())
    {
      cout<<output<<endl;
    }
    printsubsequence(input.substr(1),output+input[0]);
    printsubsequence(input.substr(1),output);
}
int main()
{
    
    string output = "";
    string input = "abcd";
 
    printsubsequence(input, output);
    
 return 0;
}