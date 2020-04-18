#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool backspaceCompare(string S, string T) {

        string ress, rest;
        int ss = S.size();
        int ts = T.size();
        for (int i = 0; i < ss || i < ts; i++)
        {
            if( i < ss ){
                if(S[i] == '#')
                    if(ress.size())
                        ress.pop_back();
                else
                {
                    ress.push_back(S[i]);
                }
            }
            if( i < ts ){
                if(T[i] == '#')
                    if(rest.size())
                        rest.pop_back();
                else
                {
                    rest.push_back(T[i]);
                }

            }
            
        }
        if(ress == rest)
            return true;
        
        return false;

    }
};


int main(){

    string S, T;
    cin >> S >> T;
    Solution Sol;

    Sol.backspaceCompare(S, T);
    return 0;
}


