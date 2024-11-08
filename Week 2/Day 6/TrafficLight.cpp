#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin >> t;
   while(t--)
   {
       int n;
       char c;
       cin>>n>>c;
       string s;
       cin>>s;
       if(c=='g')
       {
           cout<<0<<endl;
           continue;
       }
       s+=s;
       int ans =0, last=0;
       for(int i=s.size()-1;i>=0;i--)
       {
           if(s[i] == 'g')
           {
               last=i;
           }
           if(s[i]==c)
           {
               ans = max(ans,last-i);
           }
       }
       cout<<ans<<endl;
   }
   return 0;
}
