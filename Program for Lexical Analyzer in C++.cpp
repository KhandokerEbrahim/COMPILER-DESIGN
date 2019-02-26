# COMPILER-DESIGN
#include<bits/stdc++.h>
using namespace std;
string keywords[32] = {"auto","break","case","char","const","continue","default",
                       "do","double","else","enum","extern","float","for","goto",
                       "if","int","long","register","return","short","signed",
                       "sizeof","static","struct","switch","typedef","union",
                       "unsigned","void","volatile","while"
                      };
//;
map < string,int > key,id,math,logic,numeric, others;


int main()
{
    string s,s1[1000];
    int j=0;
    freopen("input.txt","r",stdin);

    while(getline(cin,s))
    {
        for(int i=0; i<s.size(); i++)
        {


            if(s[i]==' ' || s[i]=='\n' || s[i]==',' || s[i]==';' || s[i]=='\t' || s[i]=='(' || s[i]==')')
            {
                j++;
            }
            else
            {
                s1[j] +=s[i];
            }
        }
        j++;
    }
    for(int i=0; i<j; i++)
    {
        //cout <<"|"<<s1[i]<<"|"<<endl;
        bool isKeyword=0,Numercal=1;
        for(int j=0; j<32; j++)
        {
            if(keywords[j]==s1[i])
                isKeyword=1;

        }
        for(int j=0; j<s1[i].size(); j++)
        {
            if(s1[i][j]=='.'  || ( s1[i][j] >= '0'  && s1[i][j]<='9') )
            {

            }
            else
            {
                Numercal=0;
            }
        }
        if(isKeyword)
        {


            key.insert(pair<string,int>(s1[i], 1));
        }

        else if(s1[i]=="+" || s1[i]=="-" || s1[i]=="*" || s1[i]=="/" || s1[i]=="=" )
        {

            math.insert(pair<string,int>(s1[i], 1));
        }

        else if( s1[i]==">" || s1[i]=="=>" || s1[i]=="<=" || s1[i]==">" || s1[i]=="==" )
        {
            logic.insert(pair<string,int>(s1[i], 1));
        }
        else if(Numercal)
        {
            numeric.insert(pair<string,int>(s1[i], 1));
        }
        else if(s1[i]=="," || s1[i]==";" || s1[i]=="(" || s1[i]==")" || s1[i]=="{"   || s1[i]=="}")
        {
            others.insert(pair<string,int>(s1[i], 1));

        }
        else
        {
            id.insert(pair<string,int>(s1[i], 1));
        }

    }
    cout << "Keywords are  :      ";
    for( auto it = key.begin(); it != key.end(); ++it )
    {
        cout << it->first<<" "; // key

    }
    cout <<endl;
    cout <<"Identifiers are  : ";

    for( auto it = id.begin(); it != id.end(); ++it )
    {
        cout << it->first<<" ";
    }
      cout <<endl<<"Numerical are  : ";

    for( auto it = numeric.begin(); it != numeric.end(); ++it )
    {
        cout << it->first<<" "; // key

    }
    cout <<endl<<"Math Expression are  : ";

    for( auto it = math.begin(); it != math.end(); ++it )
    {
        cout << it->first<<" "; // key

    }

    cout <<endl<<"Logical  : ";
    for( auto it = logic.begin(); it != logic.end(); ++it )
    {
        cout << it->first<<" "; // key

    }
    cout <<endl<<"Other are  : ";

    for( auto it = others.begin(); it != others.end(); ++it )
    {
        cout << it->first<<" "; // key

    }
}
