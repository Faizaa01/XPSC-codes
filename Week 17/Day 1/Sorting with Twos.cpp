#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        bool yo=true;
        int x,y=0,i=1;
        while(i<=n)
        {
            x = 1<<y;
            vector<int> a;
            while(i<=x && i<=n)
            {
                a.push_back(v[i-1]);
                i++;
            }
            for(int j=1;j<a.size();j++)
            {
                if(a[j-1]>a[j])
                {
                    yo=false;
                    break;
                }
            }
            y++;
            if(!yo) break;
        }
        if(yo) yes;
        else no;
    }
    return 0;
}
