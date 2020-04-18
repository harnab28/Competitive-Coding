#include<bits/stdc++.h>


using namespace std;

int main(){

    int n;

    cin >> n;

    string s;

    vector <string> res;
    int i;
    while(n--){
        i = 0;
        while((cin >> s))
        {
            if(s != "\n")
                break;
            res.push_back(s);

            cout << res[i] << "\n";
            i++;
            
        }
        
        cout << "************************************************";

        for(i = 0; i < res.size(); i++){

            cout << res[i] << "\n";
        }
        
    }
    
    return 0;
}