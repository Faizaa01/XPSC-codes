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
        cin>>n;

        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        if(a[n-1]==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;

            vector<int> v;
            for(int i=n-1;i>=0;i--)
            {
                if(a[i]==0)
                {
                    if(i==0 || a[i-1]==0)
                    {
                        v.push_back(0);
                    }
                    else if(a[i-1]==1)
                    {
                        int cnt=0,j=i-1;
                        int x,idx;
                        while(j>-1 && a[j]==1)
                        {
                            cnt++;
                            idx=j;
                            j--;
                        }
                        x=cnt;
                        while(cnt--)
                        {
                            v.push_back(0);
                        }
                        v.push_back(x);
                        i=idx+1;
                    }
                }
            }
            for(int val:v)
            {
                cout<<val<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
