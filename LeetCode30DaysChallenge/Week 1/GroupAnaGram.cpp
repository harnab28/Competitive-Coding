#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        string s;
        unordered_map <string, vector<string> > um;
        vector <vector <string> > vvs;
        for (int i = 0; i < strs.size(); i++)
        {
            s = strs[i];
            sort(s.begin(),s.end());
            um[s].push_back(strs[i]);
        }

        for (auto e: um)
        {
            vvs.push_back(e.second);
        }

        return vvs;
        
    }
};