#include<iostream>

using namespace std;


long int solve(long int q){
    
    if(q < 9)
        return q;

    return (q/9 + 10 *   solve(q/9)); 

}
 int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long int q;
    
    while(cin >> q){

        cout << solve(q) << "\n";


    }
    return 0;
}