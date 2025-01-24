#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        string a,b;
        cin>>n>>m>>a>>b;
        int cnt=0,x=0;
        for(int i=0;i<m;i++)
        {
            if(a[x]==b[i])
            {
                cnt++;
                x++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
