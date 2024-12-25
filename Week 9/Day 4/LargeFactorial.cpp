#include <bits/stdc++.h>
using namespace std;

const int mod=1e9+7;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,ans=1;
	    cin>>n;
	    for(int i=1;i<=n;i++)
	    {
	        ans = (1ll*ans%mod * i%mod)%mod;
	    }
	    cout<<ans<<endl;
	}

}
