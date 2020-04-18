#include<bits/stdc++.h>

using namespace std;

void solve();

int main(){


    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}


void solve(){
    int n, l;

    cin >> n >> l;

    vector< pair <int,int> > vect;

    int xi, xr;
    for (int i = 0; i < n; i++)
    {
        cin >> xi >> xr;
        vect.push_back( make_pair(xi, xr) ); 
    }

    sort(vect.begin(), vect.end());

    bool flag = false;

    for(int i = 0; i < n - 1; i++){
        int r = vect[i].first + l;

        int c = vect[i].second;

        for(int j = i + 1; j < n; j++){
            if(vect[j].first <= c && vect[j].second <= r)
                c = max(c, vect[j].second);

            if(r == c)
                break;                
        }

        if(r == c)
        {
            flag = true;
            break;
        }

    }

    if(flag)
        cout << "Yes\n";
    else
    {
        cout << "No\n";
    }
    

    

    


}