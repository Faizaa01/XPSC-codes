#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        int x=1,y=n;
        vector<int> v(n);
        for(int i=0; i<k; i++)
        {
            int j=i;
            if(i%2 == 0)
            {
                while(j<n)
                {
                    v[j]=x;
                    x++;
                    j+=k;
                }
            }
            else
            {
                while(j<n)
                {
                    v[j]=y;
                    y--;
                    j+=k;
                }
            }
        }
        for(auto x:v)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}
