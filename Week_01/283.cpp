class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        for(int i = 0; i < nums.size(); ++i)
        {
            if(nums.at(i) != 0)
            {
                nums.at(j) = nums.at(i);
                j++;
            }
        }
        for(int i = j; i < nums.size(); ++i)
        {
            nums.at(i) = 0;
        }
    }
};