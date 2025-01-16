#include <bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        string p,h;
        cin>>p>>h;
        int ps=p.size(),hs=h.size();
        sort(p.begin(),p.end());

        string s;
        bool yo = false;
        for (int i=0;i<=hs-ps;i++)
        {
            s=h.substr(i,ps);;
            sort(s.begin(),s.end());
            if(s==p)
            {
                yo = true;
                break;
            }
        }
        if(yo) yes;
        else no;
    }
    return 0;
}

