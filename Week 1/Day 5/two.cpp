#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    list<string> l;
    unordered_map<string, list<string>::iterator> pos;
    while (n--)
    {
        string s;
        cin >> s;
        if (pos.find(s) != pos.end())
        {
            l.erase(pos[s]);
        }
        l.push_front(s);
        pos[s] = l.begin();
    }
    for (const auto& name : l)
    {
        cout << name << '\n';
    }
    return 0;
}
