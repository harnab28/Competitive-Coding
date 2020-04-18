#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        k = k % n;

        vector <int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            if(i >= (n-k))
                cout << a[i] << " ";

        }

        for (int i = 0; i < n-k; i++)
        {
            cout << a[i] << " ";
        }
        
        cout << "\n";

    }

    return 0;
}