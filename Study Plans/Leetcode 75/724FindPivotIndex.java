class Solution
{
    public int pivotIndex(int[] nums)
    {
        int leftSum = 0, totalSum = 0;

        // Sum up all the numbers
        for (int i : nums)
        {
            totalSum += i;
        }

        // Calculate the left sum. If the left sum is not equal to sum - leftSum - the current num (to exclude it) then fails
        for (int j = 0; j < nums.length; j++)
        {
            if (leftSum == (totalSum - leftSum - nums[j]))
                return j;
            leftSum += nums[j];
        }
        return -1;
    }
}