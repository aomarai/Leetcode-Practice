// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
#include <stdlib.h>
#include <stdio.h>
using namespace std;

class Solution {
public:
    int firstBadVersion(int n) 
    {
        int left = 1;
        int right = n;
        int mid;

        // While the left and right pointers don't cross
        while (left < right)
        {
            int midIndex = left + (right - left) / 2;
            // If the middle value is bad, return it
            if (isBadVersion(midIndex))
            {
                right = midIndex;
            }
            else
            {
                // If the middle value is good, move the left pointer to the right to continue checking
                left = midIndex + 1;
            }
        }
        return left;
    }
};