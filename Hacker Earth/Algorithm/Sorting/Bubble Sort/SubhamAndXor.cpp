#include<bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    long int n;

    cin >> n;

    long int *a;
    a = new long int[n];
    
    unordered_map <long int, long int> um;
    
    long int count = 0;

    for(long int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(um.find(a[i]) == um.end())
            um[a[i]] = 1;
        else{
            
            um[a[i]] += 1;
        }
    }    


    for(auto m : um){
        count +=  ( m.second ) * ( m.second - 1 ) * 0.5;
    }


    cout << count ; 
    return 0;
}