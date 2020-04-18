#include<bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;

    int *a;
    a = new int[n*n];

    long int length = n*n;
    for (int i = 0; i < length; i++)
    {
        cin >> a[i];
    }

    sort(a, a + length);

    int res[10][10];


    //creating the resultant matrix
    int k = 0;
    int t = 0, d = n - 1, l = 0, r = n - 1;

    while(k < length){
        

        //top
        for (int i = l; i <= r; i++)
            res[t][i] = a[k++];
        t++;

        //right
        for (int i = t; i <= d; i++)
            res[i][r] = a[k++];
        r--;

        //down
        for (int i = r; i >= l; i--)
            res[d][i] = a[k++];
        d--;

        //left
        for (int i = d; i >= t; i--)
            res[i][l] = a[k++];
        l++;
    }
    


    //displaying the resultant matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}