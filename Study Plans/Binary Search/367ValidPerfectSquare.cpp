class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        if (num == 1)
            return true;
        long left = 1, right = num / 2;
        long mid;
        while (left <= right)
        {
            mid = left + (right - left) / 2;
            if (mid * mid == num)
                return true;
            else if (mid * mid < num)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return false;
    }
};