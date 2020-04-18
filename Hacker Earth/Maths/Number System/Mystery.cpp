#include<iostream>

using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){

        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        int n;
        cin >> n;
        int c = 0;
        for(int i = 1; i <= n /2; i++)
        {
            if(n % i == 0) c++;
        }

        c++;
        cout << c << "\n";
    }
    return 0;
}