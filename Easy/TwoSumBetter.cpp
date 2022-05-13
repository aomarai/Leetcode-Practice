#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        //Better approach using an unordered map
        unordered_map<int, int> map;
        int elementToFind;

        //Insert all elements from nums into the map
        for (int i = 0; i < nums.size(); i++)
        {
            map.insert({nums[i], i});
        }

        //Iterate through the map and find the element to find
        for (int i = 0; i < nums.size(); i++)
        {
            elementToFind = target - nums[i];
            if (map.find(elementToFind) != map.end() && map[elementToFind] != i)
            {
                return {i, map[elementToFind]};
            }
        }
        return {-1, -1};
    }
};