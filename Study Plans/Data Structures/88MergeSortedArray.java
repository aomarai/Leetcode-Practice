class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n)
    {
        int nums1ReadPtr = m - 1, nums2ReadPtr = n - 1;

        // Start loop from the end of the array with 0s
        for (int i = n + m - 1; i > 0; i--)
        {
            if (nums2ReadPtr < 0)
                break;

            // Check if the number at the end of nums1 or nums2 is bigger and write larger
            // Make sure the pointer doesn't go out of bounds
            if (nums1ReadPtr >= 0 && nums1[nums1ReadPtr] > nums2[nums2ReadPtr])
            {
                nums1[i] = nums1[nums1ReadPtr];
                nums1ReadPtr--;
            }
            else
            {
                nums1[i] = nums2[nums2ReadPtr];
                nums2ReadPtr--;
            }
        }
    }
}