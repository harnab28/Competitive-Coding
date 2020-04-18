#include<bits/stdc++.h>

using namespace std;

int main(){



    int a[3][3];
    int i,j,s1,s2;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(j%2!=0)
            {
                s1=s1+a[i][j];
            }
            else
            {
                s2=s2+a[i][j];
            }
        }
    }
    cout<<s1<<endl;
    cout<<s2<<endl;

    return 0
}