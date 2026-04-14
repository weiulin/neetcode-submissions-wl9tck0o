class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int longest = 0;

        for(int num:s){
            //找序列的頭，num-1存在代表num不是頭
            if(s.find(num-1) == s.end()){ //find()給一個指標往下找，找到end()代表沒找到
                int currentNum = num;
                int currentLcs = 1;
                while(s.find(currentNum+1) != s.end())
                {
                    currentNum+=1;
                    currentLcs+=1;
                }
                if(currentLcs > longest)
                longest = currentLcs;
            }
        }
        return longest;
    }
};
