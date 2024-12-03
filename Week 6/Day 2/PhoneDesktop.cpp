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
        int x,y;
        cin >> x >> y;
        int cnt = 0;
        if(y!=0)
            cnt = (y+1)/2;
        int ax = ((y/2)*7) + ((y%2)*11);
        int d=x-ax;
        if(d > 0)
        {
            cnt += (d+14)/15;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
