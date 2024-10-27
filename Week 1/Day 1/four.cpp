#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string N;
    cin>>N;
    int l=N.size();
    int add=4-l;
    string s;
    if(add>0)
    {
        while(add--)
        {
            s+='0';
        }
    }
    s+=N;
    cout<<s;
    return 0;
}