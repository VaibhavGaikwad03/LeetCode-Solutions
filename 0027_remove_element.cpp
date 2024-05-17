class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        vector<int> temp;

        for (auto a : nums)
        {
            if (a != val)
                temp.push_back(a);
        }
        nums = temp;
        return temp.size();
    }
};