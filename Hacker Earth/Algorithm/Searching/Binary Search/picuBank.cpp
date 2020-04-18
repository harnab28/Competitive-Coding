#include<iostream>

using namespace std;


int main (){

    int t;
    cin >> t; // number of test cases

    long d, a, m, b, x, amount, interstMonth, interest;
    
    while (t > 0)
    {
        cin >> d >>  a >>  m >>  b >> x;
        
        interest = m * a + b; //taking interst of m+1 months

        interstMonth = ((x - d) / interest);

        amount = d + interest * interstMonth;

        interstMonth *= (m+1);
        
        //using binary search to calulate the exact principle amount
        if (amount == x)
        {
            cout << interstMonth << endl;
            t--;
            continue;
        }
        

        int l = 1;
        int h = m + 1;

        
        while ( l < h - 1 ){
            int mid = (l + h)/2;

            long val = (mid * a + amount);

            if(val > x)
            {
                h = mid;
            }
            else{
                l = mid;
            }    
        }

        if( l == 1 ){
            long val = amount + a;
            if(val >= x){
                interstMonth += 1;
                amount = val;
            }            
            else{
                amount += amount + a;
                interstMonth += h;                
            }

        }
        else if(h == m+1){

            long val = amount + (l * a);
            amount = val;
            if(val >= x)
                interstMonth = interstMonth + l;
            else
            {
                    interstMonth += h;
            }
            
            

        }else
        {
            amount = amount + l * a;
            if(amount >= x)
                interstMonth += l;
            else
            {
                interstMonth = interstMonth + h;
            }
            

        }
        
        cout << interstMonth << endl; 
        t--;
    }
    


    return 0;
}