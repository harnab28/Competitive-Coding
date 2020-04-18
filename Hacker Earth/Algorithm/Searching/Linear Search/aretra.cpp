#include<iostream>

using namespace std;
 
int main()
{
    long int n, *a, i, sum=0, res=1001;
    cin >> n; 
    a = new long int[n];
    for(i=0;i<n;i++)
    {
        cin >> a[i];
        sum = sum + a[i];
    }


 
 
    for(i=0; i<n; i++)
    {
        if(a[i]*n > sum)
        {
            if(res>=a[i])
            {
                res=a[i]; 
            }
         
        }
    }
    cout << res;
 }