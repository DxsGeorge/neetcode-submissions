class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> sortMap;
        for (const auto& s : strs)
        {
            string sorted_str=s;
            sort(sorted_str.begin(),sorted_str.end());
            sortMap[sorted_str].push_back(s);
        }
        vector<vector<string>> res;
        for (const auto& pair : sortMap)
        {
            res.push_back(pair.second);
        }

        return res;
    }
};
