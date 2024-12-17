#include <bits/stdc++.h>
using namespace std;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n),b(n);
        for (int i=0; i<n; i++)
            cin >> a[i];
        for (int i=0; i<n; i++)
            cin >> b[i];

        bool yo = true;
        int dif=-1, z=-1;
        for (int i=0; i<n; i++)
        {
            if(a[i]<b[i])
            {
                yo=false;
                break;
            }
            int x=a[i]-b[i];
            if(b[i]>0)
            {
                if(dif== -1) dif=x;
                else if(dif!=x)
                {
                    yo = false;
                    break;
                }
            }
            else if(b[i]==0)
            {
                z=max(z,x);
            }
        }
        if(z>dif && dif!=-1)
        {
            yo = false;
        }
        if(yo) yes;
        else no;
    }
    return 0;
}
