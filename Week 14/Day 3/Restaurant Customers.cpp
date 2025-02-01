#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<int, int> d;
    for (int i = 1; i <= n; i++)
    {
        int l, r;
        cin >> l >> r;
        d[l]++;
        d[r+1]--;
    }
    int mx=0,cur=0;

    for (auto [key,value]: d)
    {
        cur += value;
        mx = max(mx, cur);
    }

    cout<< mx <<endl;

    return 0;
}
