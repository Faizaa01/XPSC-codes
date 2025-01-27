#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<int> v;
    for(int i=2; i<=n+1; i++)
    {
        bool yo = true;
        for(ll j=2; j*j<=i; j++)
        {
            if(i%j==0)
            {
                yo = false;
                break;
            }
        }
        if(yo)
        {
            v.push_back(1);
        }
        else
        {
            v.push_back(2);
        }
    }
    if(n<3)
    {
        cout<<1<<endl;
    }
    else
    {
        cout<<2<<endl;
    }
    for(int x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    return 0;
}
