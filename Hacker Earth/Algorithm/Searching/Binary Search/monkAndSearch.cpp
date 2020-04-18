#include<bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long int n, *a;
    cin >> n;

    a = new long int[n];
    for (long int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    sort(a, a+n);

    long int l , h ;

    long int q;
    cin >> q;

    long int op, x;

    while (q--)
    {
        cin >> op >> x;
        l = 0, h = n - 1;
        long int mid;
        while (l < h)
        {
            mid = (l + h)/2;
            if (a[mid] < x)
            {
                l = mid + 1;
            }
            else
                h = mid;
    
        }
        
        if(op == 0){
            if(a[h] < x)
                h = h + 1;
            cout << n - h << "\n";
            
        }
        else{
            if(a[h] <= x)
                h = h + 1;
                
            cout << n - h << "\n";
        }

    }
    
    return 0;
}