#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    int a[2],b[2],c[2];
    int x[2],y[2];
    cin>>a[0]>>a[1];
    cin>>b[0]>>b[1];
    cin>>c[0]>>c[1];
    
    if(b[0]>a[0]) x[0]=0;
    else x[0]=1;
    
    if(b[1]>a[1]) x[1]=0;
    else x[1]=1;
    
    if(c[0]>a[0]) y[0]=0;
    else y[0]=1;
    
    if(c[1]>a[1]) y[1]=0;
    else y[1]=1;
    
    if(x[0]==y[0] && x[1]==y[1]) yes;
    else no;
    
    return 0;
}
