#include<bits/stdc++.h>

using namespace std;

class MinStack {

        vector <int> s;
        int min;

public:
        /** initialize your data structure here. */
        MinStack() {
            min = INT_MAX;
        }
        
        void push(int x) {
            s.push_back(x);
            if(min > x)
                min = x;
        }
        
        void pop() {
            s.pop_back();
        }
        
        int top() {
            int x = s.size() - 1;
            return s[x];
        }
        
        int getMin() {
            return min;
        }
};  