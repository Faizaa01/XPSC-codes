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
        int n,x;
        cin>>n>>x;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int mx = a[0];
        for(int i=0;i<n-1;i++)
        {
            mx = max(mx,a[i+1]-a[i]);
        }
        mx = max(mx,2*(x-a[n-1]));

        cout<<mx<<endl;
    }
    return 0;
}
