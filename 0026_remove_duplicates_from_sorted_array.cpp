class Solution 
{
public:   
    int removeDuplicates(vector<int> &nums) 
    {    
        vector<int> unique; 

        for (int i = 0; i < nums.size(); i++)  
            if (i == 0) 
                unique.push_back(nums[i]);

            if (unique.back() != nums[i])
                unique.push_back(nums[i]);
        }

        nums = unique;
        return nums.size();
    }
};
