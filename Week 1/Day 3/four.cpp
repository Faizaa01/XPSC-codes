#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    deque<int>d(n);
    for(int i=0;i<n;i++)
    {
        cin>>d[i];
    }
    int sereja=0,dima=0,move=1;
    while(!d.empty())
    {
        int l=d.front(),r=d.back();
        int mx=max(l,r);
        if(move%2==0) dima+=mx;
        else sereja+=mx;
        if(mx==l) d.pop_front();
        else d.pop_back();
        move++;
    }
    cout<<sereja<<" "<<dima;
    return 0;
}