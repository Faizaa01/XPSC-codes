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

        ll cnt=0;
        for(int i=n-2;i>=0;i--)
        {
            while(a[i+1]<=a[i] && a[i]!=0)
            {
                a[i]=a[i]/2;
                cnt++;
            }
            if(a[i+1]<=a[i] || (a[i]==0 && i>0))
            {
                cnt=-1;
                break;
            }
        }
        cout<<cnt<<endl;

    }
    return 0;
}
