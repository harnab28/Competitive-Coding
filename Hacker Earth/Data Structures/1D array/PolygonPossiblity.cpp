#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int a, maxs = 0;

        long long sum = 0;
    
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            sum = sum + a;
            maxs = max(maxs,a);
        }

        //cout << maxs << "  " << sum << "\n";
        if(maxs < (sum - maxs))
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}