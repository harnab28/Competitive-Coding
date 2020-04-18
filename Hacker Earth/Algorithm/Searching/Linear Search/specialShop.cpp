#include<iostream>

using namespace std;

int main(){
    
    int t; // test cases
    cin >> t;

    int *res;
    int n, a, b, x, y;    
    int min = INT32_MAX;
    int count = (n / 2) ;
    int k = 0;

    res = new int[t];

    while( t > 0 ){

                            
        cin >> n >> a >> b;

        if(a < b){
            x = n;
            y = 0;
        }
        else{
            x = 0;
            y = n;
        }
        for (int i = 0; i < count + 1; i++)
        {
            int val = ( a * x * x ) + ( b * y * y );
            if ( min > val)
                min = val;
            if(a < b) {
                x--;
                y++;
            }
            else
            {
                x++;
                y--;
            }
        }
        
        res[k++] = min;
    

        
        t--;
    }

    for (int i = 0; i < k; i++)
    {
        cout << res[i] << endl;
    }
    return 0;
}