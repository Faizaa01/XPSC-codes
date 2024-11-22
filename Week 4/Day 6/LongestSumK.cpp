class Solution {
  public:
    int lenOfLongestSubarr(vector<int>& arr, int k){
        int n = arr.size(), l = 0, r = 0, ans = 0;
        map<long long,int> mp;
        long long sum = 0;
        
        for(int i=0;i<arr.size(); i++)
        {
            sum += arr[i];
        
            if (sum==k)
            {
                ans = i+1;
            }
    
            if (mp.find(sum-k) != mp.end())
            {
                ans = max(ans,i-mp[sum - k]);
            }
    
            if (mp.find(sum) == mp.end())
            {
                mp[sum] = i;
            }
        }
        return ans;
    }
};