#include<bits/stdc++.h>
#define M 1000000007


using namespace std;

int gcd(int a, int b) 
{ 
    // Everything divides 0  
    if (a == 0) 
       return b; 
    if (b == 0) 
       return a; 
   
    // base case 
    if (a == b) 
        return a; 
   
    // a is greater 
    if (a > b) 
        return gcd(a-b, b); 
    return gcd(a, b-a); 
} 
   

int main(){

    long int n;
    cin >> n;

    int *a;
    a = new int[n];
    
    long int count = n;

    long long int res = 1;

    long long int g;

    for (int i = 0; i < count; i++)
    {
        cin >> a[i];
        res = (res * a[i]) % M;

        if(!i)
            g = a[i];
        
        g = gcd (g, a[i]);    
    }

    long long int ans = 1;
    for (int i = 1; i <= g; i++)
    {
        ans = (ans * res) % M;
    }
    
    cout << ans;
    
}