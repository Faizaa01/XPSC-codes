#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    stack<char> st;
    int cnt = 0;
    for (char c : s)
    {
        if (!st.empty() && st.top() == c)
        {
            st.pop();
            cnt++;
        }
        else
        {
            st.push(c);
        }
    }
    if(cnt%2) yes;
    else no;

    return 0;
}
