#include<bits/stdc++.h>

using namespace std;

int main(){


    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;

    cin >> n;

    int a[100000];
    string s[100000];

    int max = 0;
    string res;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i] >> a[i];

        if(a[i] > max)
        {
            max = a[i];

            res = s[i];
        }
    }


    
    
    for(int i = 0; i < n; i++)
    {
        if(max == a[i])
            if(res > s[i])
                res = s[i];

    }


    cout << res ;
    
    
    
    

    return 0;
}