#include <stdlib.h>
#include <stdio.h>
#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int min = 0, max = nums.size() - 1;
        int mid;

        while (min <= max)
        {
            mid = min + ((max - min) / 2);

            // If the target is in the middle, return index
            if (target == nums[mid])
                return mid;
            // If target is smaller, look left
            else if (target < nums[mid])
            {
                // Set the maximum value to the right to the index before mid
                max = mid - 1;
            }
            else if (target > nums[mid])
            {
                min = mid + 1;
            }
        }
        //If the target isn't found, find the index where it should be inserted
        return min;
    }
};