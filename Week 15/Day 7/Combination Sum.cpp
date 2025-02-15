class Solution {
    public:
    set<vector<int>>s;
      void solve(vector<int>& a, int tar,int i,vector<vector<int>> &ans,vector<int> &v)
      {
         if(i==a.size() || tar<0) return;
         if(tar==0)
         {
            if(s.find(v)==s.end()){
            ans.push_back(v);
            s.insert(v);
            }
            return;
         }
         v.push_back(a[i]);
         solve(a,tar-a[i],i+1,ans,v);
         solve(a,tar-a[i],i,ans,v);
         v.pop_back();
         solve(a,tar,i+1,ans,v);
      }
    vector<vector<int>> combinationSum(vector<int>& a, int target) {
         vector<vector<int>> ans;
         vector<int> v;
         solve(a,target,0,ans,v);
         return ans;
        }
    };