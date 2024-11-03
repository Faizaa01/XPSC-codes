#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,x;
    cin >> n>>x;
    list<int>l;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a!=x)
        {
            l.push_back(a);
        }
    }
    for(auto val : l)
    {
        cout << val << " ";
    }
    return 0;
}
