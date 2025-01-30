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
        int p1,p2,p3;
        cin>>p1>>p2>>p3;
        if((p1+p2+p3)%2)
        {
            cout<<-1<<endl;
        }
        else if(p1+p2<p3)
        {
            cout<<p1+p2<<endl;
        }
        else
        {
            cout<<(p1+p2+p3)/2<<endl;
        }
    }
    return 0;
}

