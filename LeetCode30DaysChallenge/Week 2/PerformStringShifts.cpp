#include<bits/stdc++.h>

using namespace std;


class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        vector <int> v;
        int d = 0, fs = 0;

        
        for (int i = 0; i < shift.size(); i++)
        {           
            v = shift[i];
            fs += (v[0] == 0)? -v[1] : v[1];
        }
           
        string res = "";

        if(fs < 0)
            fs *= -1, d = 1; 
        fs %= s.size();

        //cout << fs ;
        if(d == 1){
            res = s.substr(fs, s.size()) + s.substr(0, fs); 
        }
        else
            res = s.substr(s.size()-fs,s.size()) + s.substr(0,s.size()-fs);

        return res;
    }
};

int main(){
    vector< vector<int> > v = {{0,7},{1,7}, {1, 0}, {0, 3}, {1, 3}, {0, 6}, {1, 2}};
    string s = "wpdhhcj";
    Solution sol;
    cout << sol.stringShift(s, v);
    return 0;

}