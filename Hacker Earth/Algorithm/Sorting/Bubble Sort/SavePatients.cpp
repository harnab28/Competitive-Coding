#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;

    int *vmc;
    vmc = new int[n];

    int *pmc;
    pmc = new int[n];

    for(int i = 0; i < n; i++)
        cin >> vmc[i];
    
    for(int i = 0; i < n; i++)
        cin >> pmc[i];
    
    sort(vmc, vmc + n);

    sort(pmc, pmc + n);

    int flag = 0;
    for(int i = 0; i < n; i++)
        if(vmc[i] >= pmc[i]){
            flag = 1;
            cout << "No";
            break;
        }

    if(!flag)
        cout << "Yes";

    return 0;
}