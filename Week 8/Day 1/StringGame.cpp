#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int one=0,zero=0;
        for(char c:s)
        {
            if(c=='1') one++;
            else zero++;
        }
        if(one==0 || zero==0)
        {
            cout<< "Ramos" <<endl;
            continue;
        }

        int check=0;
        if(one>=zero) check=zero;
        else check=one;
        
        if(check%2==0)
        {
            cout<< "Ramos" <<endl;
        }
        else
        {
            cout<< "Zlatan" <<endl;
        }
    }
    return 0;
}
