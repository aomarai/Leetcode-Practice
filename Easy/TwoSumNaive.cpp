#include <stdlib.h>
#include <stdio.h>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        // Naive approach
        int elementToFind;
        for (int i = 0; i < nums.size(); i++)
        {
            elementToFind = target - nums[i];
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[j] == elementToFind)
                {
                    return {i, j};
                }
            }
        }
        return {-1, -1};
    }
};