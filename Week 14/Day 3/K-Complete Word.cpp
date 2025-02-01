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
        int n,k;
        string s;
        cin>>n>>k>>s;
        int ans=0;
        for (int i=0; i<(k+1)/2; i++)
        {
            int frq[26] = {0};
            int sz = 0;

            for (int j=0; j<n; j+=k)
            {
                frq[s[j+i] - 'a']++;
                int x=k-1-i;
                if (i != x)
                {
                    frq[s[j+x] - 'a']++;
                }
                if (i == x) sz += 1;
                else sz += 2;
            }

            int mx = 0;
            for (int j=0; j<26; j++)
            {
                if (frq[j] > mx) mx = frq[j];
            }

            ans += sz-mx;
        }
        cout<<ans<<endl;
    }

    return 0;
}
