class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        int temp;
        int match;

        if (haystack.length() < needle.length())
            return -1;

        for (int i = 0; i <= haystack.length() - needle.length(); i++)
        {
            temp = i;
            match = 0;
            for (int j = 0; j < needle.length(); j++, temp++)
            {
                if (haystack[temp] == needle[j])
                    match++;
            }
            if (match == needle.length())
                return i;
        }
        return -1;
    }
};