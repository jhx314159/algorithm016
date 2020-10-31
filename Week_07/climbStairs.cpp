class Solution {
public:
    int climbStairs(int n) {
        if(n == 1)
        {
            return 1;
        }
        else if(n == 2)
        {
            return 2;
        }
        else
        {
            int i = 1, j = 2, k = 0;
            for(int m = 3; m <= n; ++m)
            {
                k = i + j;
                i = j;
                j = k;
            }

            return k;
        }
        
    }
};