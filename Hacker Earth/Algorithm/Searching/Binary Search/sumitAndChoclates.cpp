#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, *boxes;
    cin >> n;

    boxes = new int[n + 1];
    boxes[0] = 0;
    boxes++;
    for (int i = 0; i < n; i++)
    {
        cin >> boxes[i];
        boxes[i] = boxes[i] + boxes[i-1];
    }

    int q, x;
    cin >> q;

    while (q--)
    {
        cin >> x;
        int pos = lower_bound(boxes,boxes + n, x) - boxes;
        cout << pos + 1 << "\n"; 
    }
    
    

    return 0;
}