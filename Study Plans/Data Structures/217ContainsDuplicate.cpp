#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_set<int> numSet;

        // Insert vector numbers and check insertion value
        for (int i = 0; i < nums.size(); i++)
        {
            if (numSet.count(nums[i]) > 0)
                return true;
            
            numSet.insert(nums[i]);
        }
        return false;
    }
};