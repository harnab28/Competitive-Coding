#include<iostream>
#define M 1000000007
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        long int n;      
        long int max = 0;
        long int min = 0, sum = 0;

        cin >> n;
        n--;


        //FInding MInimum
        sum = ((((n%M) * (n+1)%M)%M)/2)%M;
       
        min = ((long int)sum/(n+1)) % M;
        min =(((min * min)%M) * (n+1))%M;

        /*
        min = int (sum / n);
        min = (min * min) % M;
        min = min * n;

        */
        
        //FInding MAximum
        max = (((sum * (((2*n)%M) + 1)%M)%M)/3)%M;

        cout << min << " " << max << "\n";
    }

    return 0;
    
}