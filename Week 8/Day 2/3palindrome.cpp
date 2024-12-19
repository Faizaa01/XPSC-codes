#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string ans="";

    int y=(n/4)+1;
    //cout<<y<<endl;
    while(true)
    {
        if(y==0) break;
        ans+="aa";
        ans+="bb";
        y--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i];
    }
    cout<<endl;
    return 0;
}

