
#include<bits/stdc++.h>

using namespace std;

long F(long int n){
    long count = 0;

    if(n){
        count += n / 5;
        n = n / 5;
    }
    return count;
}


long long answer (int N) {

    long int l = 5, h = 1e10;

    long res = h;

    while (l <= h)
    {
        long mid = l + (h - l)/2;

        long val = F(mid);

        if(val >= N)
        {
            res = mid; 
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
        
    }

    cout << res << "\n";
    

    return 0;

}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i=0; t_i<T; t_i++)
    {
        int N;
        cin >> N;

        long long out_;
        out_ = answer(N);
        cout << out_;
        cout << "\n";
    }
}