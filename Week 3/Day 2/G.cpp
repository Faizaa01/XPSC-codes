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
        string a,b;
        cin>>a>>b;
        int x=a.size()-1;
        int y=b.size()-1;
        if(a==b)
        {
            cout<<"="<<endl;
        }
        else if(a[x]=='S')
        {
            if(b[y]=='S')
            {
                if(a.size()>b.size())
                    cout<<"<"<<endl;
                else
                    cout<<">"<<endl;
            }
            else
            {
                cout<<"<"<<endl;
            }
        }
        else if(a[x]=='L')
        {
            if(b[y]=='L')
            {
                if(a.size()<b.size())
                    cout<<"<"<<endl;
                else
                    cout<<">"<<endl;
            }
            else
            {
                cout<<">"<<endl;
            }
        }
        else if(a[x]=='M')
        {
            if(b[y]=='S')
            {
                cout<<">"<<endl;
            }
            else
            {
                cout<<"<"<<endl;
            }
        }
    }
    return 0;
}
