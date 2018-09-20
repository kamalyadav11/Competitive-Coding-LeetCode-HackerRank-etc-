class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int count = 0; unordered_map<int, int> hash;
        for(int i = 0; i < nums.size(); i++) {
            hash[nums[i]]++;
        }
        for(auto count: hash) {
            if(count.second > 1) {
                return true;
            }
        }
        
        return false;
    }
};