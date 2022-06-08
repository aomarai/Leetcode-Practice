class Solution {
    public int searchInsert(int[] nums, int target) {
        int min = 0, max = nums.length - 1;
        int mid;

        while (min <= max)
        {
            mid = min + ((max - min) / 2);

            // If target is found, return mid index
            if (target == nums[mid])
            {
                return mid;
            }
            // If target is less than mid, look left
            else if (target < nums[mid])
            {
                max = mid - 1;
            }
            // If target is more than mid, look right
            else if (target > nums[mid])
            {
                min = mid + 1;
            }
        }
        // If not found, return where it would be (min)
        return min;
    }
}