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
        cin >> n >>k;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(is_sorted(a.begin(),a.end()))
        {
            cout<<0<<endl;
            continue;
        }

        int cnt=0;
        for(int i=0;i<n;i++)
        {
           int x=abs(a[i]-(i+1));
           if(x%k!=0)
           {
               cnt++;
           }
        }
        if(cnt==2)
            cout<<1<<endl;
        else if(cnt>2)
            cout<<-1<<endl;
        else
            cout<<0<<endl;
    }
    return 0;
}