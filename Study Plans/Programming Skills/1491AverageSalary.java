import java.lang.Math.*;

class Solution {
    public double average(int[] salary)
    {
        int minSalary = Integer.MAX_VALUE, maxSalary = 0;
        int minSalIndex = 0, maxSalIndex = 0;

        // Scan and find minimum and maximum salaries and their indexes
        for (int i = 0; i < salary.length; i++)
        {
            // Check if minimum
            if (salary[i] < minSalary)
            {
                minSalary = salary[i];
                minSalIndex = i;
            }
            if (salary[i] > maxSalary)
            {
                maxSalary = salary[i];
                maxSalIndex = i;
            }
        }

        // Set min and max to 0
        salary[minSalIndex] = 0;
        salary[maxSalIndex] = 0;

        // Ignore the first two elements for calculating the average
        double average = 0;
        for (int i = 0; i < salary.length; i++)
        {
            average += salary[i];
        }

        // Calculate the average with the length - 2 because there are 2 exclusions: max and min salary
        average /= (salary.length - 2);

        return average;
    }
}