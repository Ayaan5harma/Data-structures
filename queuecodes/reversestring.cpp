 string reverse(string str)
  {
     string star="";
      for(int i=str.size();i>0;i--)
      {
          star=star+str[i];
      }
      return star;
  }
    string reverseWords (string s)
    {
        //code here.
       string ans;
        stack<char> st;
        int i=0;
        while(s[i]!='\0')
        {
          string  word=" ";
           if(s[i]!='.')
           {
               word=word+s[i];
               
           }
          string ans=reverse(word);
         ans=ans+".";
            i++;
        }
        while(s[i]!='\0')
        {
            return ans;
        }
    }