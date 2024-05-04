class Solution
{
    int convert_to_int(char c)
    {
        if (c == 'I')
            return 1;
        if (c == 'V')
            return 5;
        if (c == 'X')
            return 10;
        if (c == 'L')
            return 50;
        if (c == 'C')
            return 100;
        if (c == 'D')
            return 500;
        return 1000;
    }

public:
    int romanToInt(string s)
    {
        int number = 0;

        for (int i = 0; i < s.length() - 1; i++)
        {
            if (convert_to_int(s[i]) < convert_to_int(s[i + 1]))
                number -= convert_to_int(s[i]);
            else
                number += convert_to_int(s[i]);
        }
        number += convert_to_int(s[s.length() - 1]);
        return number;
    }
};