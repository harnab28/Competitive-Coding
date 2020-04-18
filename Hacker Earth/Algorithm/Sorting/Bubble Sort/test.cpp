#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;

    cin >> n;

    int *a;
    a = new int[n];
    
    for(int i = 0; i < n; i++)
        cin >> a[i];
    
    int *res;
    res = new int[n];
    int k = 0;
    res[k] = a[n-1];

    for(int i = n-2; i >=0; i--)
    {
        if(res[k] <= a[i])
        {    
            res[++k] = a[i];
            
        }
    }
    

    for (int i = k; i >= 0; i--)
    {
        cout << res[i] << " ";
    }
    
    return 0;
}