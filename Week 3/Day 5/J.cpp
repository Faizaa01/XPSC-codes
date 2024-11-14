#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    int a[202][202];
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int total=0,sum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                sum+=a[i][j];

                int x=i+1,y=j+1;
                while(x<n && y<m)
                {
                    sum+=a[x][y];
                    x++,y++;
                }

                x=i+1,y=j-1;
                while(x<n && y>=0)
                {
                    sum+=a[x][y];
                    x++,y--;
                }

                x=i-1,y=j-1;
                while(x>=0 && y>=0)
                {
                    sum+=a[x][y];
                    x--,y--;
                }

                x=i-1,y=j+1;
                while(x>=0 && y<m)
                {
                    sum+=a[x][y];
                    x--,y++;
                }

                if(total<sum)
                {
                    total = sum;
                }
                sum=0;
            }
        }
        cout<<total<<endl;
    }
    return 0;
}
