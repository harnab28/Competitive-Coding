#include<bits/stdc++.h>

using namespace std;

int arr[50001];
vector <long> a[50001];

long int bs(long int size, long int b, long int target){

    long int low = 0, high = size, mid;
    
    while (low != high)
    {
        mid = (low + high)/2;

        if(a[b][mid] <= target)
            low = mid + 1;
        else
        {
            high = mid;
        }
    }
    

    return high;
}

int main(){


    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long int n, q;
    cin >> n >> q;


    for (long int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        a[arr[i]].push_back(i);   
    }

    for (long int i = n+1 ; i <= 2*n; i++)
    {
        a[arr[i-n]].push_back(i);
    }
    
    long int x, y;

    while (q--)
    {
        cin >> x >> y;
        long int minN = INT_MAX;
        for (long int i = 0; i < a[x].size(); i++)
        {
            long int pos = bs(a[y].size(), y, a[x][i]);
            long int dist = abs(a[y][pos] - a[x][i]);

            minN = min(minN, dist);
            if(pos != 0)
                minN = min(minN, abs(a[y][pos-1]-a[x][i]));
        }

        
        cout << minN / 2 << "\n";

    }
    
    
    return 0;
}