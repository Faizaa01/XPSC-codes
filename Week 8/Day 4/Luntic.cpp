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
        int n;
        cin>>n;

        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        ll one=0,zero=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==0) zero++;
            else if(a[i]==1) one++;
        }
        ll cnt= one*(1ll<<zero);

        cout<<cnt<<endl;

    }
    return 0;
}
