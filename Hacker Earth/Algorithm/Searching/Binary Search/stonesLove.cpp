#include<iostream>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);

    cin.tie(0);

    cout.tie(0);

    long n, q;

    cin >> n >> q;

    long *stones;

    stones = new long[n+1];

    stones[0] = 0;

    for (long i = 1; i <= n; i++)
    {
        cin >> stones[i];
        stones[i] += stones[i-1];
    }

    long *m;
    m = new long[q+1];

    for (long i = 1; i <= q; i++)
    {
        cin >> m[i];
    }
    
 
    

    for(long i = 1; i <= q; i++){           //applying binary search
        
        long l = 1;
        long h = n;

        while (l < h)
        {
            long mid = ( l + h) / 2;

            if(stones[mid] == m[i])
            {
                l = mid;
                break;
            }

            if(stones[mid] < m[i])
                l = mid + 1;
            else
            {
                h = mid;
            }

        }
        
        cout << l << "\n";

    }



    return 0;
}