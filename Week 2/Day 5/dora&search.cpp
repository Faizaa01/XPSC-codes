#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
	cin>>t;
	while(t--)
	{
	    int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int i=0,j=n-1;
        int mn=1,mx=n;
        bool yo = false;
        while(i<j)
        {
            if((v[i]==mn && v[j]==mx) || (v[i]==mx && v[j]==mn))
            {
                i++,j--;
                mn++,mx--;
            }
            else if(v[i]==mn || v[i]==mx)
            {
                if(v[i]==mn) mn++;
                if(v[i]==mx) mx--;
                i++;
            }
            else if(v[j]==mx || v[j]==mn)
            {
                if(v[j]==mn) mn++;
                if(v[j]==mx) mx--;
                j--;
            }
            else
            {
                yo = true;
                break;
            }
        }
        if(yo)
            cout<< i+1 <<" "<< j+1 <<endl;
        else
            cout<< -1 <<endl;
    }
    return 0;
}
