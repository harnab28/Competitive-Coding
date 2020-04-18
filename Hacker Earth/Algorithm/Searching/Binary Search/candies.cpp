#include<iostream>
#include<bits/stdc++.h>

using namespace std;

string s;

int k;     


bool checkpal(int len){

    int fr = 0;
    int hashing[130];

    memset(hashing, 0, sizeof(hashing));

    for (int i = 0; i < s.size(); i++)
    {
        int v = (int) s[i];

        hashing[v]++;

        if(hashing[v] % 2 == 0)
            fr++;
        
        if(i >= len)
        {
            int left = (int) s[i-len];
            hashing[left]--;

            if(hashing[left] % 2 == 1)
                fr--;
        }

        if(fr >= (k / 2))
            return 1;
    }

    if( fr >= ( k / 2))
        return 1;

    return 0;
}



int  main(){

    ios_base::sync_with_stdio(0);

    cin.tie(0);
    cout.tie(0);

    
    cin >> s;

    int t;
    cin >> t;

        

    while (t--)
    {
        cin >> k;

        int l = k;
        int h = (int) s.size();
        int ans = -1;
        while (l <= h)
        {
            int mid = (l + h) / 2;

            if(checkpal(mid)){
                ans = mid;
                h = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        
        cout << ans << "\n";
        
    }
    

    return 0;
}