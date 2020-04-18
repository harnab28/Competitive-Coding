#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string,int> a,pair<string,int> b)
{

    if(a.second>b.second)
        return true;
    else if(a.second==b.second)
    {
        if(a.first < b.first)
            return true;
    }
    return false;

}



int main()
{
   
    int n,m;

    cin>>n>>m;
    pair<string,int> p[n];
    
    for(int i=0;i<n;i++)
    {
        string s;
        int a;
        cin>>s>>a;
        p[i]=make_pair(s,a);
    }
    sort(p,p+n,cmp);
    for(int i=0;i<m;i++)
        cout<<p[i].first<<endl;

    
    
}