class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> group;
        for(string s:strs){
            string key = s; //1. 複製一份到 key (現在 key 是 "eat")

            // 2. 對 key 進行排序
            // sort (現在 key 是 "aet")
            sort(key.begin(),key.end());

            // 3. Map 操作
            // group[key] 會直接給你那個 vector，然後 push_back 原本的 s 進去
            group[key].push_back(s);

        }
        vector<vector<string>> result;
        //輸出用不到key 所以只push_back group的內容
        for(auto &[key, group]:group)
            result.push_back(group);
        return result;
    }
};