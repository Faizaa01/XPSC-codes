#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<int>a(n);
    int frq[200005]={0};
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            frq[a[i]+a[j]]++;
            mx = max(mx,frq[a[i]+a[j]]);
        }
    }
    cout<<mx<<endl;
    return 0;
}
