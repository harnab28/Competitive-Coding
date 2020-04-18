#include<bits/stdc++.h>

using namespace std;

long int a, b, c, d;

long int f(long int t){

    return(a*t*t*t + b*t*t + c*t + d);
}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long int t;
    cin >> t;
    long int k;

    while(t--){

        cin >> a >> b >> c >> d >> k;

        long int l = 0, h = k, mid;

        while(l < h){
            
            mid = (l + h)/2;
            //cout << mid << ": " << f(mid) << " l :"<< l << " h: " << h <<endl ; 
            if(f(mid) <= k)
                l = mid + 1;
            else
                h = mid;
        }
        cout << h - 1 << endl;
    }
    return 0;   
}