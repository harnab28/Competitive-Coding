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

    for(int i=1; i<=n; i++)  cin >> a[i];

    sort(a+1, a+n+1);

    
    for(int i=2; i<=n; i++) { 
        a[i] = a[i-1] + a[i]; 
        
    }

    int q, x;
    cin >> q;
    

    while (q--)
    {
        cin >> x;

        long long low = 0, high = n, mid;


        while (low < high)
        {
            mid = (low + high + 1) / 2;

            if(a[mid] >= x*mid){
                high = mid - 1 ;
            }
            else
                low = mid;
        }

        cout << low << "\n";

    }
    


    return 0;
}