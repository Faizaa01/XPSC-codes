#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int i=1,cnt=1;
        while(i<n)
        {
            ll x=(i+1)*2ll;
            cnt++;
            i=x;
        }
        cout<<cnt<<endl;
        
    }

    return 0;
}
