#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n),v(n);
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
        a[i]--;
        v[a[i]]=i;
    }
    int ans=1;
    for (int i=1; i<n; i++)
    {
        if(v[i]<v[i-1])
        {
            ans++;
        }
    }
    cout <<ans<< endl;
    return 0;
}
