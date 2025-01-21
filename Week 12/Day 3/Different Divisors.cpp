#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e6 + 5;
vector<int> solve(int n)
{
    vector<bool> isPrime(n + 1, true);
    vector<int> primes;
    isPrime[0] = isPrime[1] = false;

    for(int i = 2; i <= n; i++)
    {
        if(isPrime[i])
        {
            primes.push_back(i);
            for (int j = i + i; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    return primes;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int>v = solve(MAXN);

    int t;
    cin >> t;
    while(t--)
    {
        int d;
        cin >> d;
        int x = *lower_bound(v.begin(),v.end(),d+1);
        int y = *lower_bound(v.begin(),v.end(),x+d);

        cout<< x*y <<endl;
    }

    return 0;
}
