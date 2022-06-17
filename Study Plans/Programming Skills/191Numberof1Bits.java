// https://leetcode.com/problems/number-of-1-bits/

public class Solution {
    // you need to treat n as an unsigned value
    public int hammingWeight(int n) {
        int totalOnes = 0, mask = 1;
        for (int i = 0; i < 32; i++)
        {
            if ((n & mask) != 0)
                totalOnes++;
            // Move one bit to the left
            mask <<= 1;
        }
        return totalOnes;
    }
}