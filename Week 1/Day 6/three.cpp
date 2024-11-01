#include<bits/stdc++.h>
using namespace std;
int main ()
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
        set<char>st;
        st.insert(s.begin(), s.end());
        string res;
        for(char c:st)
        {
            res+=c;
        }
        map<char,char>m;
        int i=0,j=res.size()-1;
        while(i<=j)
        {
            m[res[i]]=res[j];
            m[res[j]] = res[i];
            i++;
            j--;
        }
        for(int i=0;i<n;i++)
        {
            cout<<m[s[i]];
        }
        cout<<endl;
    }
    return 0;
}
