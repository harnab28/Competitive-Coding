#include<bits/stdc++.h>

using namespace std;

int main(){
    long int t;
    cin >> t;

    string s, s1="123456789", subs;

    long num;

    cout << t;
    while(t--){

        cin >> num;


        ostringstream str1;

        str1 << num;

        s = str1.str();

        sort(s.begin(), s.end());

        subs = s1.substr(0, s.size());

        //cout << subs;

        if(s == subs)
            cout << "YES\n";
        else
        {
            cout << "NO\n";
        }

    }

    return 0;
}