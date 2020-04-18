#include<iostream>

using namespace std;

int main(){

    int q;
    cin >> q;

    while (q--)
    {
        int a;
        cin >> a;
        int sum = 0;
        for (int i = 1; i <= a/2; i++)
        {
            if(a%i == 0)
                sum += i;
        }

        cout << sum << "\n";
        
    }
    
}