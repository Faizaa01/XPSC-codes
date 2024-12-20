#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        cin.ignore();
        int n=8;
        char a[n][n];
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                cin>>a[i][j];
            }
        }

        char c;
        for(int i=0;i<8;i++)
        {
            c='R';
            for(int j=0;j<8;j++)
            {
                if(a[i][j]!='R')
                {
                    c='B';
                    break;
                }
            }
            if(c=='R') break;
        }
        cout<<c<<endl;
    }
    return 0;
}
