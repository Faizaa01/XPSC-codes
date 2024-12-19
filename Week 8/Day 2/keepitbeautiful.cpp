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
        vector<int>a(n),b;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<int>v(n);;
        bool yo=false;
        v[0]=1;
        b.push_back(a[0]);
        for(int i=1;i<n;i++)
        {
            if(yo)
            {
               if(a[i]<b.back())
               {
                   v[i]=0;
               }
                else
                {
                    if(a[i]>b[0])
                    {
                        v[i]=0;
                    }
                    else
                    {
                        v[i]=1;
                        b.push_back(a[i]);
                    }
                }
            }
            else
            {
                if(a[i]>=b.back())
                {
                    v[i]=1;
                    b.push_back(a[i]);
                }
                else
                {
                    if(a[i]>b[0])
                    {
                        v[i]=0;
                    }
                    else
                    {
                        yo=true;
                        v[i]=1;
                        b.push_back(a[i]);
                    }
                }
            }
        }
        for(int x:v)
        {
            cout<<x;
        }
        cout<<"\n";
    }

    return 0;
}

