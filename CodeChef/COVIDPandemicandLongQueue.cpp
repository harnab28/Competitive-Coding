#include<bits/stdc++.h>

using namespace std;


int main(){

    int t;
    cin >> t;

    while(t--){
        int count, c = 5;
        int a, f = 0;
        bool  t = true;
        cin >> count;
        for (int i = 0; i < count; i++)
        {
            cin >> a;
            if(a == 1){
                f = 1;
                if(c < 5)
                {
                    cout << "NO\n";
                    t = false;
                    break;
                }
                c = 0;
                continue;

            }

            else{
                if(f == 1)
                    c++;
            }
        }
        
        if(t == true)
            cout << "YES\n";        


    }
    return 0;
}
