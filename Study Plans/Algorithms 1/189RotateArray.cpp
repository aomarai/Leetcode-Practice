#include <stdio.h>
#include <stdlib.h>
#include <vector>
using namespace std;

class Solution {
public:
    // Method to shift an array by k places to the right
    void rotate(vector<int>& nums, int k) {
        int temp;
        int nextElementIndex = 0;
        
        // Grab the first element and shift it over 3 steps
        for (int i = 0; i < nums.size(); i++)
        {
            // Make sure the index for the shifting loops back to the beginning of array
            nextElementIndex += k;
            if (nextElementIndex > nums.size())
                nextElementIndex = (i + k) % nums.size();
            
            // Swap the first element with the next element
            temp = nums[nextElementIndex];
            nums[nextElementIndex] = nums[i];

            // Shift the temp element k steps to the right
            nextElementIndex += k;
            if (nextElementIndex > nums.size())
                nextElementIndex = (i + k) % nums.size();
            nums[nextElementIndex] = temp;
        }
    }
};