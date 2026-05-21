class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        const bool hasDuplicates = std::adjacent_find(nums.begin(), nums.end()) != nums.end();
        return hasDuplicates;
    }
};