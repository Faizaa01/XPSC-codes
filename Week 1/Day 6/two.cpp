#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        if(s.size()==1)
        {
            if(s[0]!='z')
            {
                char c = s[0];
                c++;
                s+=c;
            }
            else
            {
                char c = s[0];
                c--;
                s+=c;
            }
            cout << s << endl;
        }
        else
        {
            for(int i=0;i<s.size()-1;i++)
            {
                if(s[i]==s[i+1])
                {
                    if(s[i]!='z')
                    {
                        char c = s[i];
                        c++;
                        s.insert(s.begin()+i+1,1,c);
                        break;
                    }
                    else
                    {
                        char c = s[i];
                        --c;
                        s.insert(s.begin()+i+1,1,c);
                        break;
                    }
                }
                if(i==s.size()-2)
                {
                    i++;
                    if(s[i]!='z')
                    {
                        char c = s[i];
                        c++;
                        s+=c;
                    }
                    else
                    {
                        char c = s[i];
                        c--;
                        s+=c;
                    }
                }
            }
            cout << s << endl;
        }
    }
    return 0;
}
