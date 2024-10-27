#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int A,B,C;
    cin>>A>>B>>C;
    bool yo=false;
    int H;
    for(int i=A;i<=B;i++)
    {
        if(i%C==0)
        {
            H=i;
            yo=true;
            break;
        }
    }
    if(yo) cout<<H;
    else cout<<-1;
    return 0;
}
