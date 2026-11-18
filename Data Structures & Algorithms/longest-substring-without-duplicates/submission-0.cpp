class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> cnt;
        int l=0,ans=0;
        for(int r=0; r<(int)s.size(); r++){
            cnt[s[r]]++;
            while(cnt[s[r]]>1){
                cnt[s[l]]--;
                l++;
            }
            ans = max(ans,r-l+1);
        }
        return ans;
    }
};
