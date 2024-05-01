class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int i = 0;
        int j = 0;

        vector<int> ret;

        for (i = 0; i < nums.size(); i++)
        {
            for (j = i + 1; j < nums.size(); j++)
            {
                if (nums[j] == target - nums[i])
                {
                    goto break_out;
                }
            }
        }

    break_out:
        ret.push_back(i);
        ret.push_back(j);
        return ret;
    }
};