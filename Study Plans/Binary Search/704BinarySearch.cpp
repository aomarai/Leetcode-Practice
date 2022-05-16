#include <stdio.h>
#include <stdlib.h>
#include <vector>
using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int min = 0, max = nums.size() - 1;
        int mid;

        // Iterative solution
        while (min <= max)
        {
            // Set the new mid point
            mid = min + ((max - min) / 2);

            // If the target is the direct middle
            if (nums[mid] == target)
                return mid;
            // If the middle value is smaller than target, set the new minimum search
            else if (nums[mid] < target)
                min = mid + 1;
            // If the middle value is larger than the target, search to the left
            else if (nums[mid] > target)
                max = mid - 1;
        }
        // Target was not found in the array
        return -1;
    }
};