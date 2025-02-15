class Solution {
   public:
         void solve(vector<int>& a, int tar,int i,vector<vector<int>> &ans,vector<int> &v)
         {
            if(tar<0) return;
            if(tar==0)
            {
               ans.push_back(v);
               return;
            }
            for(int j=i;j<a.size();j++)
            {
               if(j>i && a[j]==a[j-1]) continue;
               if (a[j] > tar) break;
   
               v.push_back(a[j]);
               solve(a,tar-a[j],j+1,ans,v);
               v.pop_back();
            }
         }
       vector<vector<int>> combinationSum2(vector<int>& a, int target) {
           vector<vector<int>> ans;
            vector<int> v;
            sort(a.begin(),a.end());
            solve(a,target,0,ans,v);
            return ans;
       }
   };