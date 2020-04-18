#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, q, p, t;

    cin >> n >> q >> p >> t;

    char s;
    int *a;

    a = new int[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        a[i] = 1;
        if(s == 'f')
            a[i] = a[i] + p;
        if(i > 0)
        {
            a[i] = a[i] + q;
            a[i] += a[i-1];
        }

    }

    int time = lower_bound(a, a + n, t) - a;

    cout << time; 
    
    return 0;
}