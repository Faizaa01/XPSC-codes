#include <bits/stdc++.h>
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
        cin >>n;
        int frq[26]={0};
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            for(int j=0;j<=26;j++)
            {
                if(frq[j]==v[i])
                {
                    cout<<char(j+'a');
                    frq[j]++;
                    break;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
