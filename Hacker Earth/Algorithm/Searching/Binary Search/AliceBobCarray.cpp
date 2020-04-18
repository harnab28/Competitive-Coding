#include<bits/stdc++.h>

using namespace std;

int main(){
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int *a;
    a = new int[n];

    cin >> a[0];
    for (int i = 1; i < n; i++)
    {
        cin >>  a[i];
    }

    int *b;

    b = new int[n];
    
    int k = 0;

    for(int i=n-2; i >= 0; i--){
        a[i] = a[i] + a[i+1];
        b[k] = a[i+1]; k++;
    }

    b[k] = a[0];
    /*
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    */
    
    int q, x;

    cin >> q;

    while(q--){
        cin >> x;

        int pos = lower_bound(b, b+n, x) - b;

        

        if(b[pos+1] == x && pos < n - 1)
            pos = pos + 1;
        
        //cout << pos << " ";

        if( n % 2 != 0)
        {
            if(pos % 2 == 0)
                cout << "Alice\n";
            else
                cout << "Bob\n";
            
        }
        else{
            if(pos % 2 == 0)
                cout << "Bob\n";
            else
                cout << "Alice\n";

        }

    }    

    return 0;
}