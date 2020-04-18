#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int count = 0;
        vector <int> res;

        for (int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == 0)
                count++;
            else
                res.push_back(nums[i]);
        }

        nums = res;
        for (int i = 0; i < count; i++)
        {
            nums.push_back(0);
        }
        
        
    }
};
