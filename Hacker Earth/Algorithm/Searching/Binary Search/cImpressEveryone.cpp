#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll int n;
    cin>>n;
    ll int a[n];
    for(ll int i=0;i<n;i++)
        cin>>a[i];

    for(ll int i=n-2;i>=0;i--)
        a[i]+=a[i+1];

    sort(a,a+n);
    ll int t;
    cin>>t;
    while(t--)
    {
        ll int q;
        cin>>q;
        ll int p=lower_bound(a,a+n,q)-a;
        if(n%2==1)
        {
            if(p%2==0)
                cout<<"A"<<"\n";
            else
                cout<<"B"<<"\n";
        }
        else
        {
            if(p%2==0)
                cout<<"B"<<"\n";
            else
                cout<<"A"<<"\n";
        }
    }
}

