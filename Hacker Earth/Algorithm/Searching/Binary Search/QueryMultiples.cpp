#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, q, *a;
    cin >> n >> q;

    a = new int [n];

    int count = n;
    for (int i = 0; i < count; i++)
    {
        cin >> a[i];
    }

    while(q--){
        int i, x, c;
        cin >> i >> x;
        c = 0;
        for( --i ; i < count; i++)
        {
            if(a[i] % x == 0) c++;
        }

        cout << c;
    }
    
    return 0;
}