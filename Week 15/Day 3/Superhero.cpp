#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s,t;
    cin>>s>>t;
    bool yo = true;
    if(s.size()!=t.size())
    {
        yo=false;
    }
    else
    {
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            {
                if(t[i]!='a' && t[i]!='e' && t[i]!='i' && t[i]!='o' && t[i]!='u')
                {
                    yo = false;
                    break;
                }
            }
            else
            {
                if(t[i]=='a' || t[i]=='e' || t[i]=='i' || t[i]=='o' || t[i]=='u')
                {
                    yo = false;
                    break;
                }
            }
        }
    }
    if(yo) yes;
    else no;

    return 0;
}
