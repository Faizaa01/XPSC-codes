#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int m=(n*(n-1))/2;
        int a[n],b[m];
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
        }
        sort(b,b+m);
        int j=0;
        for(int i=0;i<n;i++)
        {
            a[i]=b[j];
            j+=n-i-1;
        }
        a[n-1]=1e9;

        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
