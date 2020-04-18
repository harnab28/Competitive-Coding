#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    int *a;
    
    a = new int [n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    for (int i = 0; i < n - 1; i++)
    {
        a[i+1] -= a[i];
        a[i] = 0;
    }

    if(a[n-1] == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
    
    
    return 0;
}