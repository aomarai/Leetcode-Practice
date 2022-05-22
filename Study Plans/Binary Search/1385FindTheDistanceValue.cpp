#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>
using namespace std;

// This question was horribly worded. Had a hard time figuring out what the question was wanting for a little while.

class Solution
{
public:
    int findTheDistanceValue(vector<int> &arr1, vector<int> &arr2, int d)
    {
        int result = arr1.size();

        sort (arr1.begin(), arr1.end());
        sort (arr2.begin(), arr2.end());

        for (int i = 0, j = 0; i < arr1.size() && j < arr2.size();)
        {
            if (abs(arr1[i] - arr2[j]) <= d)
            {
                i++;
                result--;
            }
            else if (arr1[i] < arr2[j])
                i++;
            else if (arr1[i] > arr2[j])
                j++;
        }
        return result;
    }
};