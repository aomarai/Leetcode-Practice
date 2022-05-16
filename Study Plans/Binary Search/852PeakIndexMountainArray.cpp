#include <stdio.h>
#include <stdlib.h>
#include <vector>
using namespace std;

class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int min = 0, max = arr.size() - 1;
        int mid;

        // Find the peak index using binary search
        while (min < max)
        {
            mid = min + ((max - min) / 2);

            // Keep iterating until you find where it starts going down
            if (arr[mid] < arr[mid + 1])
                min = mid + 1;
            //Binary search
            else
                max = mid;
        }
        return min;
    }
};