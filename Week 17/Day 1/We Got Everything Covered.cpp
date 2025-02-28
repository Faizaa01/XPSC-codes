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
        string s,st;
        char c = 'a';
        for(int i=0;i<k;i++)
        {
            s += c;
            c++;
        }
        for(int i=0;i<n;i++)
        {
            st += s;
        }
        cout<<st<<endl;
    }
    return 0;
}
