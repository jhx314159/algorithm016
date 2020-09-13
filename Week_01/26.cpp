class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() >= 1)
        {
            for(vector<int>::iterator iter = nums.begin() + 1; iter != nums.end();)
            {
                if(*(iter - 1) == *iter)
                {
                    iter = nums.erase(iter);
                }
                else
                {
                    ++iter;
                }
            }
        }
        return nums.size();
    }
};