class Solution {
    public int[] intersect(int[] nums1, int[] nums2)
    {
        if (nums1.length < nums2.length)
            return intersect(nums2, nums1);

        Set<Integer> nums1Set = new HashSet<Integer>();
        List<Integer> intersection = new ArrayList<>();
        int count = 0;


        // Add all of nums1 into a set
        for (int i : nums1)
        {
            nums1Set.add(i);
        }

        for (int j : nums2)
        {
            if (count >= nums1.length)
            {
                break;
            }
            if (nums1Set.contains(j))
            {
                intersection.add(j);
                count++;
            }
        }
        return intersection.stream().mapToInt(Integer::valueOf).toArray();