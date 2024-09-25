public class Solution
{
    public bool IsPalindrome(int x)
    {
        int reversed = 0;
        int temp = x;

        while (temp > 0)
        {
            int digit = temp % 10;
            temp /= 10;

            reversed = reversed * 10 + digit;
        }

        return reversed == x;
    }
}
