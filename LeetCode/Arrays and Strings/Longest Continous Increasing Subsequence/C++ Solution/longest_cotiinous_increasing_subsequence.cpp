class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) { 
        int maxm = 1, count = maxm;
        if (nums.size() == 0) return 0;
        for(int end = 1; end < nums.size(); end++) {
            maxm = (nums[end] > nums[end - 1]) ? maxm + 1 : 1;
            count = max(maxm, count);
        }
        return count;
    }
};