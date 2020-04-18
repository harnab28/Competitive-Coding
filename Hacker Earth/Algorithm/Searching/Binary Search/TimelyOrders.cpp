#include<bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long int q;
    cin >> q;

    
    long int *x, *time;

    long int tq, k, t;

    x = new long int[q];

    time = new long int[q];

    long int i = 0, flag = 1;

    while(q--){
       
        cin >> tq >> k >> t;

        if(tq == 1){ 

            if(flag){

                flag=0;
                x[i] = k;
            }
            else
                x[i] = x[i-1] + k;
            time[i] = t; 
            i++; 

            continue;
        }
  

        long int pos = upper_bound(time, time + i , t) - time;     

        if(pos == i)
            pos = i - 1;
        
        
        long int sPos = lower_bound(time, time + i, t - k) - time;
  
        if (sPos)
        {
            cout << x[pos] - x[sPos] << "\n";
        }
        else
        {
                cout << x[pos] << "\n";
        }
        
        
       
        
        
    }

    return 0;

}