class Solution {
    public:
        void subsets(vector<int>& nums, int x, vector<int>& a,vector<vector<int>>& b){
            b.push_back(a);
            for(int i=x;i<nums.size();i++)
            {
                if(i>x && nums[i]==nums[i-1]) 
                continue;
                a.push_back(nums[i]);
                subsets(nums,i+1,a,b);
                a.pop_back();
            }
        }
        vector<vector<int>> subsetsWithDup(vector<int>& nums) {
            vector<int> a;
            vector<vector<int>>b;
            sort(nums.begin(), nums.end());
            subsets(nums,0,a,b);
            return b;
        }
    };