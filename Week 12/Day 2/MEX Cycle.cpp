#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y;
        cin>>n>>x>>y;
        vector<int>a(n,-1);
        vector<set<int>> s(n);

        for(int i=0;i<n;i++)
        {
            s[i].insert((i+1)%n);
            s[i].insert((i+n-1)%n);
        }
        x--,y--;
        s[x].insert(y);
        s[y].insert(x);
        for(int i=0;i<n;i++)
        {
            set<int> st;
            for(int val:s[i])
            {
                if(a[val]!=-1)
                {
                    st.insert(a[val]);
                }
            }
            int mex=0;
            while(st.find(mex)!=st.end())
            {
                mex++;
            }
            a[i]=mex;
        }

        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }

        cout<<endl;
    }
    return 0;
}
