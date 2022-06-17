class Solution {
    public int[] runningSum(int[] nums)
    {
        int offset = 0;

        for (int i = 0; i < nums.length; i++)
        {
            nums[i] = nums[i] + offset;
            offset = nums[i];
        }
        return nums;
    }
}