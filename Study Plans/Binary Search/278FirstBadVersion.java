public class Solution extends VersionControl {
    public int firstBadVersion(int n) {
        int min = 1, max = n, mid;

        while (min <= max)
        {
            mid = min + ((max - min) / 2);

            // If version is not bad, move up
            if (!isBadVersion(mid))
                min = mid + 1;
            else
                max = mid - 1;
        }
        return min;
    }
}