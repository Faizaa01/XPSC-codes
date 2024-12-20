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
        cin >> n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        bool yo = false;
        for(int i=0;i<n;i++)
        {
           int x=a[i];
           if(a[x-1]==(i+1))
           {
               yo=true;
               break;
           }
        }
        if(yo) cout<< 2 <<endl;
        else cout<< 3 <<endl;
    }
    return 0;
}
