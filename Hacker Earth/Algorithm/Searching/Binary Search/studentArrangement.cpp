#include<bits/stdc++.h>

using namespace std;

int main(){


    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long int n, m, k;

    cin >> n >> m >> k;

    
    long int v[100001] = {0};
    long int arr[100001];

    long int pSeat, count = 0;

    for (long int i = 1; i < m; i++)
    {
        arr[i] = i + 1;
    }
    
    arr[m] = 1;

    long int flag;
    for (long int i = 1; i <= n; i++)
    {
        cin >> pSeat;
        
        if(v[pSeat] < k)
            v[pSeat]++, count++; 
        else if(flag)
        {
            
            flag = 0;
            for (long int j = arr[pSeat]; j != pSeat; )
            {
                /* code */
                if(v[j] < k)
                {
                    arr[pSeat] = j;
                    v[j]++;
                    flag = 1;
                    break;
                }

                j = j + 1;

                if(j == m + 1)
                    j = 1;
            }
            
        }

    }

    cout << n - count << "\n";

    return 0;
}