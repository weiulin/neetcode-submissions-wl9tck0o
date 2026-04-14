class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> visited;
        for(int i=0; i<nums.size(); i++){
            int ta = target-nums[i];
            if(visited.count(ta))
                return {visited[ta],i};
            visited[nums[i]] = i;
        }
        return {};
    }
};
