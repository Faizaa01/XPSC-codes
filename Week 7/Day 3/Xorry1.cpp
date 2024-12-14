#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int A = 0, B = 0, pos=0;

        while((1 << pos) <= x)
        {
            pos++;
        }
        B = 1 << (pos-1);
        A = B ^ x;
        cout << A << " " << B << endl;
    }
    return 0;
}
