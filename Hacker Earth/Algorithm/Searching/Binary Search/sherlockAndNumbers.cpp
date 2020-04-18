#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    int n , k , p;

    int a;
    while (t > 0)
    {
        cin >> n >> k >> p;
        
        for (int i = 0; i < k; i++)
        {
            cin >> a;
            if(a <= p)
                p++ ;
        }
        

        if(p > n)
            cout << "-1" << endl;
        else
        {
            cout << p << endl;
        }
        
        
        t--;    
    }
    

    return 0;
}