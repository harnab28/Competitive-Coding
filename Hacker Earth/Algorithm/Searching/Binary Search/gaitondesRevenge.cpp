#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    string s, t;
    cin >> s;

    int q;
    cin >> q;

    int k, b;

    while (q--)
    {
        cin >> t >> k >> b;
        for (int i = 0; i < s.size() - k + 1; i++)
        {
            string sub = s.substr(i , k);
            
        }

        

    }
    

    return 0;
}