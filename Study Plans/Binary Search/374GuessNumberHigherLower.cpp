#include <stdio.h>
#include <stdlib.h>
#include <vector>
using namespace std;

/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution
{
public:
    int guessNumber(int n)
    {
        int left = 1, right = n;
        int mid;
        int result;
        do
        {
            mid = left + ((right - left) / 2);
            result = guess(mid);

            // If the target is the direct middle
            if (result == 0)
                return mid;
            // If the middle value is smaller than target, set the new minimum search
            else if (result == 1)
                left = mid + 1;
            // If the middle value is larger than the target, search to the left
            else if (result == -1)
                right = mid - 1;
        } while (left <= right);

        return -1;
    }
};