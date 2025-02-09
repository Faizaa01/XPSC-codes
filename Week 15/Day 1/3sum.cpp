#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

bool solve(int n)
{
    vector<int> a(n),v;
    map<int,int>m;
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
        int x = a[i]%10;
        if (m[x] < 3)
        {
            v.push_back(x);
            m[x]++;
        }
    }
    int sz=v.size();
    for (int i=0; i<sz; i++)
    {
        for (int j=i+1; j<sz; j++)
        {
            for(int k=j+1; k<sz; k++)
            {
                if(i!=j && j!=k && i!=k)
                {
                    if((v[i]+v[j]+v[k])%10 == 3)
                    {
                        return true;
                    }
                }
            }
        }
    }
    return false;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        if(solve(n)) yes;
        else no;
    }
    return 0;
}
