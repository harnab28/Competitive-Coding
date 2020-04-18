#include<bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, q;
    cin >> n >> q;

    int *a;
    a = new int[n+1];

    for(int i = 1; i <= n; i++)
        cin >> a[i];
    
    int x, b, c;

    while(q--){
        
        cin >> x >> b;

        if(x == 0)
        {
            cin >> c;
            if(a[c] == 0)
                cout << "EVEN\n";
            else
                cout << "ODD\n";
            
            /*for(int i = 1; i <= n; i++)
                cout << a[i] << " ";*/
        }
        else
        {
            a[b] = (a[b] == 0);
            //   cout << "yes \n";
        }


    }

    return 0;
}