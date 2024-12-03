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
        int n,m;
        cin >> n >> m;
        if(n<m)
        {
            cout<<"NO"<<endl;
        }
        else if((n%2==0 && m%2==0) || (n%2==1 && m%2==1) || n==m)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
