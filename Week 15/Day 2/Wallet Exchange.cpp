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
        int a,b;
        cin>>a>>b;
        bool alice=true;
        if(a==b) alice=false;
        else if(a<b && (b-a)%2==0) alice=false;
        else if(a>b && (b-a)%2==0) alice=false;

        if(alice) cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;
    }
    return 0;
}
