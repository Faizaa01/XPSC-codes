#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    stack<string>s;
    for(int i=0;i<n;i++)
    {
        string x;
        cin>>x;
        s.push(x);
    }
    set<string>st;
    while(!s.empty())
    {
        if(st.find(s.top())==st.end())
        {
            st.insert(s.top());
            string x=s.top();
            
            cout<<x.substr(x.size()-2);
        }
        s.pop();
    }
    return 0;
}
