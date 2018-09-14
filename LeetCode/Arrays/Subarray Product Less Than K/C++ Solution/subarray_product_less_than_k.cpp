#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
       int prod = 1, count = 0; 

        for(int i = 0, j = 0; j < nums.size(); j++) {
            prod *= nums[j];
            
            while(prod >= k && i < j) {
                prod /= nums[i++]; //removing first number to slide the window
            }
            
            if(prod < k) {
                int len = j - i + 1;
                count += len;
            }
        }
        return count;
    }
};

int main() {
    Solution s;
    std::vector<int> nums {10, 5, 2, 6};
    int k = 100;
    cout<<s.numSubarrayProductLessThanK(nums, k)<<endl;

    return 0;

}