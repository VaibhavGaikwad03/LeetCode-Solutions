class Solution
{
public:
    bool isPalindrome(int x)
    {
        long int iRev = 0, iDigit = 0, temp = 0;
        if (x < 0)
        {
            return false;
        }

        temp = x;

        while (x != 0)
        {
            iDigit = x % 10;
            iRev = (iRev * 10) + iDigit;
            x = x / 10;
        }
        if (iRev == temp)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};