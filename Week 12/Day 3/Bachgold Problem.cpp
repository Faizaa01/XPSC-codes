#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int k = n/2;

    cout<< k <<endl;

    if (n%2 == 0)
    {
        for (int i = 0; i < k; i++)
        {
            cout<< 2 <<" ";
        }
    }
    else
    {
        for (int i = 0; i < k-1; i++)
        {
            cout<< 2 <<" ";
        }
        cout << 3;
    }
    cout<<endl;

    return 0;
}
