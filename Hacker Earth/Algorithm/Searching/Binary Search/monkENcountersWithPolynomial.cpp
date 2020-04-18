#include<bits/stdc++.h>

using namespace std;

long long int a, b, c, k;

long long int poly(long long int kleast){

    return (a*kleast*kleast + b*kleast + c);

}
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long int t;
    cin >> t;



    while(t--){
        cin >> a >> b >> c >> k;

        long long int l = 0, h = k / 2 + 1, mid;
        if(k < c){
            cout << "0\n";
            continue;
        }

        while (l < h)
        {
            mid = (l + h)/2;
            if (poly(mid) < k)
            {
                l = mid + 1;
            }
            else
            {
                h = mid;
            }
            
        }

        cout << l << "\n";
        
    }

    return 0;
}