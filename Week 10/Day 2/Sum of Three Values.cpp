#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,x;
    cin>>n>>x;
    vector<pair<ll,int>> a(n);
    for (int i=0; i<n; i++)
    {
        cin>>a[i].first;
        a[i].second=i+1;
    }
    sort(a.begin(),a.end());
    for (int i=0; i<n; i++)
    {
        ll xx = x-a[i].first;
        int j = i+1, k = n-1;
        while (j < k)
        {
            ll sum = a[j].first+a[k].first;
            if (sum == xx)
            {
                cout << a[i].second << " " << a[j].second << " " << a[k].second << endl;
                return 0;
            }
            else if (sum < xx)
            {
                j++;
            }
            else
            {
                k--;
            }
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
}
