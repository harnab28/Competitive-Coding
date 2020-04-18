#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);
    
    long n, *a;
    cin >> n;

    a = new long[n];

    for (long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    
    sort(a, a + n);

    long *sum;

    sum = new long[n];
    sum[0] = a[0] ;
    for (long i = 1; i < n; i++)
    {
        a[i] = a[i-1] + a[i];
        sum[i] = a[i] / (i+1);
    }

    long q, k;

    cin >> q;

    while(q--){
        cin >> k;

        //binary searh

        int l = 0, h = n - 1, mid;

        while (l < h - 1)
        {
            mid = (l + h) / 2;

            if(sum[mid] >= k)
                h = mid;
            else
            {
                l = mid;
            }  
        }
        if(k <= sum[0])
            cout << l << "\n";
        else if( k > sum[n-1])
            cout << n << endl;
        else
        {
            cout << l + 1 << "\n";
        }
        

    }



    return 0;
}