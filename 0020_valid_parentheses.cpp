class Solution
{
    bool check_matching(char c1, char c2)
    {
        if ((c1 == '(' && c2 == ')') || (c1 == '{' && c2 == '}') || (c1 == '[' && c2 == ']'))
            return true;
        return false;
    }

public:
    bool isValid(string s)
    {
        stack<char> stack_obj;

        for (int i = 0; i < s.length(); i++)
        {
            char ch = s[i];

            if (ch == '(' || ch == '{' || ch == '[')
            {
                stack_obj.push(ch);
            }
            if (ch == ')' || ch == '}' || ch == ']')
            {
                if (stack_obj.empty() || !check_matching(stack_obj.top(), ch))
                    return false;
                else
                    stack_obj.pop();
            }
        }

        if (stack_obj.empty())
            return true;
        return false;
    }
};