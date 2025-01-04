#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(1e6);
    int w,idx=1;
    for (int i=0;i<n;i++)
    {
        cin>>w;
        while(w--)
        {
            a[idx]=i+1;
            idx++;
        }
    }

    int m;
    cin>>m;
    while(m--)
    {
        int q;
        cin>>q;

        cout << a[q] <<endl;
    }

    return 0;
}
