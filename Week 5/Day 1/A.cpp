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
        int n;
        cin >>n;
        if(n%2==0)
        {
            cout<<"YES"<<endl;
            string s;
            char c1='A',c2='A';
            int x=n/2;
            while(x--)
            {
                s+=c1;
                s+=c2;
                if(c1!='Z') c1++,c2++;
                else c1--,c2--;
            }
            cout<<s<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
