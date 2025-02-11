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
        string a,b;
        cin>>a>>b;
        int n=a.size(),m=b.size();
        if(a==b)
        {
            yes;
            cout<<a<<endl;
        }
        else
        {
            if(a[0]==b[0])
            {
                yes;
                cout<<a[0]<<"*"<<endl;
            }
            else if(a[n-1]==b[m-1])
            {
                yes;
                cout<<"*"<<a[n-1]<<endl;
            }
            else
            {
                string x,y;
                bool yo = false;
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<m;j++)
                    {
                        if(i<n-1 && j<m-1 && a[i]==b[j] && a[i+1]==b[j+1])
                        {
                            x=a[i];
                            y=a[i+1];
                            yo=true;
                            break;
                        }
                    }
                }
                if(yo)
                {
                    yes;
                    cout<<"*"<<x<<y<<"*"<<endl;
                }
                else
                {
                    no;
                }
            }
        }
    }
    return 0;
}
