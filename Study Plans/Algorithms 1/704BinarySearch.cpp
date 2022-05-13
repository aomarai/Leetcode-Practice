#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int midIndex = nums.size() / 2;
        //If the target value is directly in the middle of the array, return the index
        if (nums[midIndex] == target)
            return midIndex;
        //Search the array by seeing if the target is larger or smaller than the middle value.
        else
        {
            //Target is smaller than the middle value, so search first half
            if (target < nums[midIndex])
            {
                for (int i = 0; i < midIndex; i++)
                {
                    if (nums[i] == target)
                        return i;
                }
            }
            else
            {
                //Target is bigger than the middle value, so search second half
                for (int i = midIndex; i < nums.size(); i++)
                {
                    if (nums[i] == target)
                        return i;
                }
            }
        }
        return -1;
    }
};