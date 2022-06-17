class Solution {
    public int subtractProductAndSum(int n) {
        // Create an array with the length of the int
        int[] digits = new int[(int) Math.log10(n) + 1];
        int sum = 0, product = 1;

        // Calculate product and sum at the same time as adding
        for (int i = 0; i < digits.length; i++)
        {
            digits[i] = n % 10;
            n = n / 10;
            sum += digits[i];
            product *= digits[i];
        }

        return product - sum;
    }
}