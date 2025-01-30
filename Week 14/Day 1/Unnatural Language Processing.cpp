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
        int n;
        string s;
        cin>>n>>s;
        string ans="";
        int i=0;
        while(i<n)
        {
            if(s[i]=='b' || s[i]=='c' || s[i]=='d')
            {
                if(s[i+1]=='a' || s[i+1]=='e')
                {
                    if(i!=0) ans+='.';
                    ans += s[i];
                    ans+=s[i+1];
                    i+=2;
                }
                else
                {
                    ans+=s[i];
                    i++;
                }
            }
        }
        cout<< ans <<endl;
    }
    return 0;
}
