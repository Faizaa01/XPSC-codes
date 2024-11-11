#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin>>n;
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            mp[x]++;
        }
        if(mp.size()<3)
        {
            if(mp.size()==1)
            {
                cout<<"YES"<<endl;
            }
            else if(mp[0]!=0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else 
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}