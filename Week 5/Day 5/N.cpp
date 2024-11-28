#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n=s.size();
        string t1,t2;
        string t="()";
        for(int i=0;i<n;i++)
        {
            t1+=t;
        }

        for(int i=0;i<n;i++)
        {
            t2.push_back('(');
        }
        for(int i=0;i<n;i++)
        {
            t2.push_back(')');
        }
        if(t1.find(s)==-1)
        {
            cout<<"YES"<<endl;
            cout<< t1 <<endl;
        }
        else if(t2.find(s)==-1)
        {
            cout<<"YES"<<endl;
            cout<< t2 <<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
