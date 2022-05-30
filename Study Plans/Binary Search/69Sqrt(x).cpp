class Solution
{
public:
    /*
    Given a non-negative integer x, compute and return the square root of x.
    Since the return type is an integer, the decimal digits are truncated
    and only the integer part of the result is returned.
    */
    int mySqrt(int x)
    {
        int left = 0, right = x;
        long mid;
        long long square;

        while (left <= right)
        {
            mid = left + (right - left) / 2;
            square = mid * mid;

            if (square == x)
                return mid;
            else if (square > x)
                right = mid - 1;
            else
                left = mid + 1;
        }
        return right;
    }
};