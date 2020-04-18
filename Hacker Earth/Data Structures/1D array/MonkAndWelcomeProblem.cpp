#include<iostream>

using namespace std;

int main(){


    int n;
    cin >> n;

    int *a, *b;
    a = new int[n];
    b = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];    
    }
    

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];    
    }


    for (int i = 0; i < n; i++)
    {
        cout << a[i] + b[i] << " ";    
    }
    return 0;
}
