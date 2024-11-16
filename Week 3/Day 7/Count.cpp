class Solution{
public:
	int search(string pat, string txt) {
	    int p = pat.size();
        int t = txt.size();
        
        vector<int> cnt1(26, 0),cnt2(26, 0);
        for (int i=0;i<p;i++)
        {
            cnt1[pat[i] - 'a']++;
        }
    
        int result = 0;
        int l = 0,r = 0;
        while (r<t)
        {
            cnt2[txt[r] - 'a']++;
            if (r-l+1 == p)
            {
                if (cnt1 == cnt2)
                {
                    result++;
                }
                cnt2[txt[l] - 'a']--;
                l++;
            }
            r++;
        }
        return result;
	}
};