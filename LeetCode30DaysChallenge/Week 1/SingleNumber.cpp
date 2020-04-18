#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int count = 1, i;

        sort(nums.begin(),nums.end());

        for (i = 1; i < nums.size(); i++)
        {
            if(nums[i] == nums[i-1])
                count++;
            else{
                if(count == 1)
                    {
                        return nums[i-1];
                    }
                count = 1;
            }
        }
                
        return nums[i-1];
    }
};