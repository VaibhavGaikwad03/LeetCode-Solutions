class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int i, j, len = s.length();
        int freq;
        vector<int> substr_lengths;
        int map[128] = {0};

        if (len == 0)
            return 0;

        if (len == 1)
            return 1;

        for (i = 0; i < len - 1; i++)
        {
            freq = 0;
            for (j = i; j < len; j++)
            {
                if (map[s[j]] > 0)
                {
                    fill_n(map, 128, 0);
                    break;
                }
                map[s[j]]++;
                freq++;
            }
            substr_lengths.push_back(freq);
        }
        return *(max_element(substr_lengths.begin(), substr_lengths.end()));
    }
};
