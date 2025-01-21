#include <bits/stdc++.h>
using namespace std;

const int maxN = 3005;
vector<int> prime(maxN);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 2; i < maxN; i++)
    {
        if (prime[i] == 0)
        {
            for (int j = i; j < maxN; j += i)
            {
                prime[j]++;
            }
        }
    }

    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (prime[i] == 2)
        {
            cnt++;
        }
    }
    cout << cnt <<endl;

    return 0;
}
