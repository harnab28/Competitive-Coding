#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;
    int n, k;
    while (t--)
    {
        cin >> n >> k;
        vector <int> alice(n);

        for (int i = 0; i < n; i++)
        {
            cin >> alice[i];
        }

        int maxb = 0, bob;

        for (int i = 0; i < n; i++)
        {
            cin >> bob;
            maxb = max(bob, maxb);
        }

        long int ans = 0;

        for (int i = 0; i < n; i++)
        {
            int p;
            if(alice[i] <= maxb){
                p = (maxb - alice[i] + 1);
                ans = ans + (p * k);
            }
        }

        cout << ans << "\n";

    }
    


    return 0;
}