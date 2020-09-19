class Solution {
public:
    bool isAnagram(string s, string t) {
      if(s.size() == t.size())
      {
        std::unordered_map<char, int> char_map;
        for(int i = 0; i < s.size(); ++i)
        {
          char_map[s.at(i)]++;
          char_map[t.at(i)]--;
          
        }
        
        for(std::unordered_map<char, int>::iterator iter = char_map.begin(); iter != char_map.end(); ++iter)
        {
          if(iter->second)
          {
            return false;
          }
        }

        return true;
        
      }

      return false;
    }

};