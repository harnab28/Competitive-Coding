#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    int a, x = -1, pos = 0, sume = 0, ans = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a;

        sume += (a==0) ? -1 : 1;

        if(sume < 0)
        {
            sume = 0;
            x = i;
        }
        else if(ans <= sume)
        {
            ans = sume;
            pos = i - x;
        }
       
    }
     cout << pos<< "\n";
    
   // cout << ans;
    return 0;
}