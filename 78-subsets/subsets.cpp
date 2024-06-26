class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        result.push_back({});

        for (int j=0;j<nums.size();j++) {
            int size = result.size();
            for (int i = 0; i < size; i++) {
                vector<int> subset = result[i];
                subset.push_back(nums[j]);
                result.push_back(subset);
            }
        }

        return result;
    }
};