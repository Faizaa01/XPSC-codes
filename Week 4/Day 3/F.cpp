#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int x=abs(b-c)+c;
        if(a==x) cout<<3<<endl;
        else if(a<x) cout<<1<<endl;
        else cout<<2<<endl;
    }
    return 0;
}
