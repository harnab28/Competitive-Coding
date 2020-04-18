#include<bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, q;
    cin >> n >> q;

    int *a;
    a = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a+n);
    int  x, m;
    while (q--)
    {
        cin >> x;
        int l = 0, h = n - 1;
        m = 1;
        while (l <= h)
        {
            int mid = (l + h)/2;
            if(a[mid] == x)
            {
                cout << "YES\n";
                m = 0;
                break;
            }
            if(a[mid] < x)
                l = mid + 1;
            else
                h = mid - 1;
        }

        if(m)
            cout << "NO\n";
        
    }
    

    
    

    return 0;
}