class Solution {
    public char nextGreatestLetter(char[] letters, char target) {
        int min = 0, max = letters.length, mid;

        while (min <= max)
        {
            // Find the middle element
            mid = min + ((max - min) / 2);

            // If the middle is smaller, move to the right
            if (letters[mid] <= target)
                min = mid + 1;
            else
                max = mid - 1;
        }
        return letters[min % letters.length];
    }
}