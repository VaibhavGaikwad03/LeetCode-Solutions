class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int i;
        istringstream iss(s);
        vector<string> tokens;
        string token;

        while (getline(iss >> ws, token, ' '))
            tokens.push_back(token);

        for (i = 0; i < tokens.size(); i++)
        {
            if (i == tokens.size() - 1)
                break;
        }

        return tokens[i].length();
    }
};