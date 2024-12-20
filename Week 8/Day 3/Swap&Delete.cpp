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
        string s;
        cin >> s;
        int one=0,zero=0;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1') one++;
            else zero++;
        }
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                if(zero>0) zero--;
                else break;
            }
            else
            {
                if(one>0) one--;
                else break;
            }
        }
        int ans = one + zero;
        cout<< ans <<endl;
    }
    return 0;
}
