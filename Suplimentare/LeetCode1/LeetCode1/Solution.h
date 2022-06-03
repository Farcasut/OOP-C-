#include <iostream>
#include <vector>
using std::vector;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int>results;
        results.push_back(0);
        results.push_back(0);
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    results[0] = i;
                    results[1] = j;
                    return results;
                }
            }
        }
        return results;
    }
};