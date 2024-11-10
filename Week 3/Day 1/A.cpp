#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int win,draw,loss;
    cin >> win >> draw >> loss;
    double x = win + 0.5 * draw;

    int y = 4 - (win + draw + loss);
    double total = x + y;

    if(total>2)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}
