#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int A,B;
    float T;
    cin>>A>>B>>T;
    T=T+0.5;
    int cnt=0,sec=0,i=1;
    while(1)
    {
        sec=A*i;
        if(sec>T) break;
        cnt+=B;
        i++;
    }
    cout<<cnt;
    return 0;
}
