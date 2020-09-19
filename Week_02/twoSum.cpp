class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      unordered_map<int, int> int_map;
      vector<int> index_vec;

      for(int i = 0; i < nums.size(); ++i)
      {
        unordered_map<int, int>::iterator iter = int_map.find(target - nums.at(i));
        if(iter != int_map.end())
        {
          index_vec.push_back(i);
          index_vec.push_back(iter->second);
          return index_vec;
        }
        else
        {
          int_map[nums.at(i)] = i;
        }
      }

      return index_vec;
    }
};