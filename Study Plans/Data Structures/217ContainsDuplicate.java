class Solution {
    public boolean containsDuplicate(int[] nums) {
        Set<Integer> numSet = new HashSet<Integer>();

        // For every integer in nums
        for (int i : nums)
        {
            if (numSet.contains(i))
                return true;

            numSet.add(i);
        }
        return false;
    }
}