#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int n=s.size();
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='7')
        {
            ans = ans | (1 << (n-i-1));
        }
    }
    int result = ans + (1 << n)-1;

    cout << result << endl;
    return 0;
}
