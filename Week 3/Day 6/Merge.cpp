#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin >> n >> m;
    vector<int> a(n),b(m);
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    for (int i=0; i<m; i++)
    {
        cin >> b[i];
    }
    int l=0,r=0;
    while (r < m && l<n)
    {
        if (a[l]<b[r])
        {
            cout<< a[l] <<" ";
            l++;
        }
        else
        {
            cout << b[r] <<" ";
            r++;
        }
    }

    while (l<n)
    {
        cout << a[l] <<" ";
        l++;
    }

    while (r<m)
    {
        cout << b[r] <<" ";
        r++;
    }

    return 0;
}
