#include<bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;

    int *a;
    a = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a+n);
    int q, m;
    cin >> q;

    while (q--)
    {
        cin >> m;
        int l = 0, h = n, mid;

        while (l < h)
        {
            mid = (l + h)/2;

            if(a[mid] < m)
                l = mid + 1;
            else
                h = mid;
               
        }

        cout << l << "\n";

    }
    
    

    return 0;
}