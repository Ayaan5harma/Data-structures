# include <bits/stdc++.h>
using namespace std;
 
/* Function checks if passed strings (str1
   and str2) are rotations of each other */
bool areRotations(string str1, string str2)
{
    if(str1.size() != str2.size())
    {
        return  false;
    }
    string temp=str1+str1;
    return (temp.find(str2) !=string::npos);
}
int main()
{
   string str1 = "AACD", str2 = "ACDA";
   if (areRotations(str1, str2))
     printf("Strings are rotations of each other");
   else
      printf("Strings are not rotations of each other");
   return 0;
}