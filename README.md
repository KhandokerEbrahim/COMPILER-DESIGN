# COMPILER-DESIGN
LAB 2

#include<bits/stdc++.h>
using namespace std;
int SET[130];
int value[500];
string s1;
int main()
{

      int n,vall;
      cin >>n;
      char ch,dummy;
      for(int i=0;i<n;i++)
      {
          cin >> ch >> dummy >> vall ;
          SET[ch] = vall;

      }
      for(int i=90;i<130;i++)
      {
          cout << SET[i] <<" ";
      }
      string s;
      getline(cin,s);
      s1 = s;
      for(int i=0;i<s.size();i++)
      s1[i] = ' ';

      for(int i=0;i<s.size();i++)
      {
          if(s[i] == ' ')
          {

          }
          else if(s[i]=='+' || s[i]== '-' || s[i]=='*' || s[i]=='/' )
          {
                s1[i]=s[i];
          }
          else
          {
              // compiler error
              int p =(char)s[i];

              int val=SET[p];

              value[i] = val;

          }
      }

      for(int i=0;i<s.size();i++)
      {
          cout << s1[i] <<" ";
      }
      cout <<endl;
      for(int i=0;s.size();i++)
      {
          cout <<value[i] <<" ";
      }

      cout <<endl;
}
