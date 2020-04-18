/************** UNABLE TO SOLVE ********************************/

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
 
using namespace std;
using namespace __gnu_pbds;
 
typedef long long ll;
typedef double db;
typedef pair < ll, ll > pll;
typedef tree < pll, null_type, less < pll >, rb_tree_tag, tree_order_statistics_node_update > ordered_set;
 
#define pb push_back
#define debug(x) cout << (#x) << " is " << (x) << endl
#define fast_io() ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
const db PI = acos(-1);
const ll MOD = 1e9 + 7;
const ll INF = LLONG_MAX;
const ll N = 1e5 + 10;
 
void solve();
 
int main() {
    fast_io();
    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; ++i) {
        solve();
    }
    return 0;
}
 
void solve() {
    ll k, n;
    string candid;
    cin >> k >> candid;
    string t = candid;
    sort(t.begin(), t.end());
    if (k == 1) {
        for (ll pref = 0; pref < k; ++pref) {
            char tar = t[pref];
            string res, temp;
            n = candid.size();
            for (ll i = 0; i < n; ++i) {
                if (candid[i] == tar) {
                    temp = candid.substr(i + 1, n - i - 1) + candid.substr(0, i);
                    if (res == "") {
                        res = temp;
                    } else if (temp < res)  {
                        res = temp;
                    }
                }
            }
            cout << tar;
            candid = res;
        }
    } else {
        candid = t;
    }
    cout << candid << "\n";
}