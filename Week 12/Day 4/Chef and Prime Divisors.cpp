#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
	    ll a, b;
		cin >> a >> b;
		while(__gcd(a,b) >1)
		{
			b /= __gcd(a,b);
		}
		if(b>1) cout << "No" <<endl;
		else cout << "Yes" <<endl;
    }
	return 0;
		
}
