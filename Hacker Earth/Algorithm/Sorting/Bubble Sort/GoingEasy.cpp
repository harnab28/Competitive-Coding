#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;

    int n, m;
    

    int a[1000];

    

    

    while(t--){
        cin >> n >> m;
        
        for(int i = 0; i < n; i++) cin >> a[i];
        
        sort(a, a + n);

        int suml = 0, sumu = 0;

        
        int d = n - m;


        for(int i = 0; i < n; i++){

            if( i < d) suml += a[i];
            
            if(i >= (n-d) )  sumu += a[i];

        }

        cout << sumu - suml << "\n";
    }

    return 0;
}