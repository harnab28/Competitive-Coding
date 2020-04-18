#include<iostream>

using namespace std;

long gcd(long int a, long int b){
    if (b == 0)
        return a;
    return gcd(b, a%b);
}
int main(){

    int t;
    cin >> t;
    while (t--)
    {
        long int n, a, b, c, ans, ab, bc, ac, abc;
        cin >> n >> a >> b >> c;
        ans = (n/a) + (n/b) + (n/c);
        ab =  (a*b)/(gcd(a,b));
        ac =  (a*c)/(gcd(a,c));
        bc = (b*c)/(gcd(b,c));
        abc = (ab*c)/(gcd(ab,c));
        ans = ans - ab - ac - bc + abc;
        cout << ans << "\n";
    }
    
    return 0;
}