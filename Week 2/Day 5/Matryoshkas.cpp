#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin >> t;
   map <int,int> mp;
   set <int> s;
   while(t--)
   {
      int n;
      cin >> n;
      vector<int> v(n);
      map<int,int>mp;
      for(int i=0;i<n;i++)
      {
          cin>>v[i];
          mp[v[i]]++;
      }
      sort(v.begin(),v.end());
      int ans=0;
      for(int i=0;i<n;i++)
      {
          int x=v[i];
          if(mp[x]!=0)
          {
              ans++;
              while(mp[x]>0)
              {
                  mp[x]--;
                  x++;
              }
          }
      }
      cout<<ans<<endl;
   }
   return 0;
}
