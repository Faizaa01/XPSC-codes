#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin >>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int robin=0, cnt=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]>=k)
            {
                robin+=a[i];
            }
            else if(a[i]==0 && robin!=0)
            {
                robin--;
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
