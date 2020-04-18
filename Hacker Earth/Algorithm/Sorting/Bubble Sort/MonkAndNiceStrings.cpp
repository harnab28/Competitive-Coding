#include<bits/stdc++.h>

using namespace  std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;

    string *s;
    s = new string[n+1];
 

    int count = n;

    for (int i = 0; i < count; i++)
    {
        cin >> s[i];
    }

    int c;
    for (int i = 0; i < count; i++)
    {
        c = 0;
        for(int j = 0; j < i; j++){
            if(s[j] < s[i])
                c++;
        }

        cout << c << "\n";

    }
    

    
    return 0;
}