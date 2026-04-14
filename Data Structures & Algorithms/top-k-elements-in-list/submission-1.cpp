class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int> count;
        // 1. 統計頻率
        for(int n:nums){
            count[n]++;
        }
        // 2. 倒進vector才能做排序，first 是數字，second 是頻率
        vector<pair<int,int>> arr;
        for(auto p:count)
            arr.push_back(p);
        // 3. 排序
        //寫一個 lambda function 告訴 sort 怎麼比大小
        // 要比的是 "頻率 (second)"，且由大到小
        sort(arr.begin(),arr.end(),[] (pair<int,int> &a,pair<int,int> &b){
            return a.second > b.second;
        });
        // 4.取前k個
        vector<int> result;
        for(int i=0; i<k; i++){
            result.push_back(arr[i].first);
        }
        return result;
    }
};
