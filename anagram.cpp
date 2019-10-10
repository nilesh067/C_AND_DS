#include<bits/stdc++.h>

using namespace std;
void sub(string,int);

int main()
{
    string s="hello";
    sub(s,s.length());
    
}

void sub(string s,int n)
{
   int i=0;
   for(int j=0;j<n;j++)
 {
   cout<<"\n"<<i<<":- \n";
   for(i=j;i<n;i++)
     {
         cout<<s.substr(i,n)<<"\n";
      } 
}
}
