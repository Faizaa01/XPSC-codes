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
        int n;
        cin >>n;
        string s1,s2;
        cin>>s1>>s2;
        int c1=0,c2=0,cnt=0;
        for(int i=0;i<n;i++)
        {
           if(s1[i]=='1') c1++;
           if(s2[i]=='1') c2++;
           if(s1[i]!=s2[i] && s2[i]=='1') cnt++;
        }
        if(c1>c2)
        {
            cnt+=(c1-c2);
        }
        cout<<cnt<<endl;
    }
    return 0;
}
