#include<bits/stdc++.h>

using namespace std;

int main(){
    int m;

    cin >> m;
    vector<pair<int,int>> v;

    int a;
    for (int i = 0; i < m; i++)
    {
        cin >> a;
        v.push_back(make_pair(a, i));
    }
    
    sort(v.begin(), v.end());

    for (int i = 0; i < m; i++)
    {
         cout << v[i].second << " ";
    }
    
    
    return 0;
}