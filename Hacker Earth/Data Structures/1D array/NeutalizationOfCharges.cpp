#include<iostream>
#include<algorithm>

using namespace std;

int main(){

    long int len;
    string s, r;
    cin >> len;
    cin >> s;
    int c = 1;
    for (int i = 1; i < s.length(); i++)
    {
        if(s[i] == s[i-1]){
            c++;
        }
        else
        {
            if(c % 2 != 0)
            {
                
                if (r.size())
                {
                    if(r[r.size()-1] != s[i-1]){
                        r.push_back(s[i-1]);
                    }
                    else
                    {
                        r.pop_back();
                    }
                }
                else
                {
                    r.push_back(s[i-1]);
                }
                         
            }
            
            c = 1;
        }   

    }

    if(c % 2 != 0)
    {
        
        if (r.size())
        {
            if(r[r.size()-1] != s[s.size() - 1]){
                r.push_back(s[s.size()-1]);
            }
            else
            {
                r.pop_back();
            }
        }
        else
        {
            r.push_back(s[s.size()-1]);
        }
                    
    }
    

    cout << r.size() << "\n" << r;
    
    return 0;
}