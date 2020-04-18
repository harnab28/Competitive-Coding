#include<bits/stdc++.h>

using namespace std;
/*
            Worst Code
            **********
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {

        sort(stones.begin(),stones.end(),greater<int> ());

        int c = stones.size()-1;
        
        for (int i = 0; i < c; )
        {
            int d = stones[i] - stones[i+1];
            stones[i] = d;
            stones[i+1] = 0;
            c--;
            sort(stones.begin(),stones.end(),greater<int> ());
        }
        return stones[0];
    }
};
*/

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {

        priority_queue <int> p(stones.begin(),stones.end());

        while(p.size() > 1){
            int x = p.top(); p.pop();
            int y = p.top(); p.pop();

            if(x-y > 0) p.push(x-y);
        }
        
        return p.empty()?0:p.top();
        
    }
};