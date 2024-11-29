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
        int n,x=0;
        cin>>n;
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            x^=a[i];
        }

        int xx = 0;
        for(int i=0;i<n;i++)
        {
            b[i]=x^a[i];
            xx^=b[i];
        }
        if(xx==0) cout<<x<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}
