#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
short t;
cin>>t;
while(t--)
{
long long int n,i,z=0,h=0,j;
cin>>n;
long long int a[n]={0},b[n]={0};
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n;i++)
cin>>b[i];
for(i=0;i<n;i++)
{
z=0;
for(j=i;j<n;j++)
{
if(j>=i && b[j]>=a[i])
z=j-i;
else
z=0;
if(z>h)
h=z;
if(b[j]<a[i])
break;
}
}
cout<<h<<"\n";
}
return 0;
}