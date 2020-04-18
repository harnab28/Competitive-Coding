#include<bits/stdc++.h>

using namespace std;

int      main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long int      n, q;
    cin >> n >> q;

    long int      *a;
    a = new long int[n];

    cin >> a[0];
    for (long int      i = 1; i < n; i++)
    {
        cin >> a[i];
        a[i] = a[i] + a[i-1];
    }

    long int      x;
    while (q--)
    {
        cin >> x;
        
        long int   l = lower_bound(a, a+n, x) - a;
        
        cout << l + 1 << "\n";

    }
    


    
    return 0;
}