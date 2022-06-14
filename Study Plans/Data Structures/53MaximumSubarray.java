class Solution {
    public int maxSubArray(int[] nums)
    {
        int currentSub = nums[0], maxSub = nums[0];

        for (int i = 1; i < nums.length; i++)
        {
            int curNum = nums[i];
            // If current subarray is negative, reset to the next positive number. Otherwise add to it.

            // If curNum is bigger than the subarray + curNum (e.g. curNum is a large negative), then reset to curNum
            currentSub = Math.max(curNum, currentSub + curNum);
            maxSub = Math.max(currentSub, maxSub);
        }

        return maxSub;
    }
}