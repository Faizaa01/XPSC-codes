#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int a[n];
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    if(sum%2==0)
    {
        cout<<sum;
    }
    else
    {
        int mn=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(a[i]%2!=0)
            {
                mn=min(mn,a[i]);
            }
        }
        sum=sum-mn;
        cout<<sum;
    }
    return 0;
}
