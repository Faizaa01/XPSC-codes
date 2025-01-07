#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        if(is_sorted(v.begin(),v.end()))
        {
            cout<<0<<endl;
        }
        else
        {
            int cnt=1;
            for(int i=0; i<n; i++)
            {
                if(v[i]==cnt)
                {
                    cnt++;
                }
            }
            int x = n-(cnt-1);
            cout<< (x+k-1)/k <<endl;
        }
    }
    return 0;
}
