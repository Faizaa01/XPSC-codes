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
        ll sum=0,one=0;
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]==1) one++;
            sum+=a[i];
        }
        if(n>1 && sum>=one+n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
