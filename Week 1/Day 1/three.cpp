#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int A,B,sum=0;
    cin>>A>>B;
    if(A==B)
    {
        sum=A+B;
    }
    else if(A>B)
    {
        sum+=A;
        A--;
        if(A>B) sum+=A;
        else sum+=B;
    }
    else
    {
        sum+=B;
        B--;
        if(A>B) sum+=A;
        else sum+=B;
    }
    cout<<sum;
    return 0;
}