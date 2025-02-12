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
        string s = "abcdefgh";
        string ss;
        cin>>ss;
        int n = ss[1]-'0';
        char c = ss[0];
        for(int i=0;i<8;i++)
        {
            if(s[i]!=c)
            {
                cout<<s[i]<<n<<endl;
            }
        }
        for(int i=0;i<8;i++)
        {
            if(i+1 != n)
            {
                cout<<c<<i+1<<endl;
            }
        }
    }
    return 0;
}
