#include<iostream>

using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        long int a, sum = 0, c = 0, maxl = 0;

        
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            sum += a;
            
            if(sum%2 == 0)
            {
                c++;
                maxl = max(maxl, c);
            }   
                
            else
            {
                
                sum = 0;
                c = 0;
            }
        }
        if(maxl == 0)
            maxl = -1;
        cout << maxl << "\n";
        





    }
    return 0;
}