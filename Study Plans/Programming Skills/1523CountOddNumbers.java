class Solution {
    public int countOdds(int low, int high)
    {
        // If the total number of numbers is even
        if ((high - low + 1) % 2 == 0)
            return (high - low + 1) / 2;
        else
        {
            if (low % 2 == 0)
                return (high - low + 1) / 2;
            else
                return (high - low + 1) / 2 + 1;
        }
    }
}