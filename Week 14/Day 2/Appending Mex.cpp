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
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bool yo = true;
    int mx=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i] > (mx+1) || a[i] > i)
        {
            cout<<i+1<<endl;;
            yo=false;
            break;
        }
        mx = max(mx,a[i]);
    }
    if(yo)
    {
        cout<<-1<<endl;
    }
    return 0;
}
