#include<iostream>

using namespace std;


int main(){

    int n, *sp, power, count;

    cin >> n; //total soldiers

    sp = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> sp[i];
    }
    
    int q, bp;

    cin >> q; //number of rounds

    while (q > 0)
    {
        cin >> bp;

        power = 0;

        count = 0;

        for (int i = 0; i < n; i++)
        {
            if(sp[i] <= bp){

                power = power + sp[i];
                count = count + 1;

            }

        }
        
        cout  << count << " " << power << endl;

        q--;
    }
    



    return 0;
}