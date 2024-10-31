#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while (n--)
    {
        deque<char>d;
        int cB=0,cb=0;
        string s;
        cin >> s;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='B')
            {
                cB++;
                continue;
            }
            if(s[i]=='b')
            {
                cb++;
                continue;
            }
            if(cb && islower(s[i]))
            {
                cb--;
                continue;
            }
            if(cB && isupper(s[i]))
            {
                cB--;
                continue;
            }
            d.push_front(s[i]);
        }
        for(auto & it:d)
        {
            cout<<it;
        }
        cout<<endl;
    }
    return 0;
}
