#include <bits/stdc++.h>
using namespace std;
bool solve(int n,string s)
{
    if (n != 5) return false;
    string s1 = "Timur";
    sort(s.begin(), s.end());
    sort(s1.begin(),s1.end());
    return s == s1;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(solve(n,s))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
