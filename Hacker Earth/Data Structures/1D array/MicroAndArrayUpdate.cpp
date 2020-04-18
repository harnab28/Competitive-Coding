#include<iostream>

using namespace std;

int main(){


    int t;
    cin >> t;
    while(t--){
        long int n, k;
        long int a;
        cin >> n >> k;
        long int min;
        cin >> a;
        min = a;
        for (long int i = 1; i < n; i++)
        {
            cin >> a;
            if(min > a)
                min = a;
        }
        
        cout << k - min << "\n";



    }
}