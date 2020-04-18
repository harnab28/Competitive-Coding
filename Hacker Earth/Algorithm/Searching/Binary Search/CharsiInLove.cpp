#include<bits/stdc++.h>

using namespace std;

inline long int snn(int n){
    return ((n * (n + 1)) / 2);
}
int main(){

    int n; 
    cin >> n;

    int a = 1;
    

    int l = 1, r = n;

    while(l <= r){

        
        if(snn(l)+snn(r) == n)
        {
            cout << "YES\n";
            a = 0;
            break;
        }
        int mid = (l + r)/2;

        if(snn(l)+snn(mid) < n)
            r = mid - 1;
        else
            {
                    
            }

    }

    if(a) cout << "NO\n";

    
    
    return 0;
}