class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        int i, j;
        string result;

        for (i = 0; i < strs[0].length(); i++)
        {
            char c = strs[0][i];

            for (j = 1; j < strs.size(); j++)
            {
                if (c != strs[j][i])
                    return result;
            }
            if (j == strs.size())
                result.push_back(c);
        }
        return result;
    }
};