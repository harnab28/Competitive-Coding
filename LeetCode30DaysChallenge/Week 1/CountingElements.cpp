#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int countElements(vector<int>& arr) {

        unordered_set <int, int> us;
        int sum = 0;

        for (int i = 0; i < arr.size(); i++)
        {
             us.insert(arr[i]);
        }

        for(int i = 0; i < arr.size(); i++){
            if(us.find(arr[i]+1) != us.end())
                sum++;
        }
        return sum;
        
        
        return sum;

    }
};