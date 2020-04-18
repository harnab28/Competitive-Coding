#include<bits/stdc++.h>

using namespace std;

int main(){


    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;

    cin >> n;

    int count = n;

    int a;

    int *res;
    res = new int[n];

    int l =  n - 1, f = 0;
    for (int i = 0; i < count; i++)
    {
       cin >> a;

       if(a % 2 == 0)
            res[f++] = a;
        else
            res[l--] = a;
         
    }

    sort(res, res + f);

    sort(res + f, res + n);

    int sum = 0;
    for (int i = 0; i < f; i++)
    {
        cout << res[i] << " ";

        sum += res[i];
    }
        
    cout << sum << " ";

    sum = 0;

    for (int i = f; i < count; i++)
    {
        sum = sum + res[i];
        cout << res[i] << " ";    
    }
    
    cout << sum;
    

    return 0;
}