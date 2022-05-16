#include <stdio.h>
#include <stdlib.h>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int min = 0, max = nums.size() - 1;
        int largestCurrSquareIndex = nums.size() - 1;
        int leftSq, rightSq;
        vector<int> sqNums(nums.size());
        // Loop until there are no more numbers to square
        while (min <= max)
        {
            leftSq = nums[min] * nums[min];
            rightSq = nums[max] * nums[max];

            // See which square is higher and add it to the new array. Then move that side
            if (rightSq > leftSq)
            {
                sqNums[largestCurrSquareIndex] = rightSq;
                largestCurrSquareIndex--;
                max--;
            }
            else
            {
                sqNums[largestCurrSquareIndex] = leftSq;
                largestCurrSquareIndex--;
                min++;
            }
        }
        return sqNums;
    }
};