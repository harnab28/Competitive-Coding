#include<bits/stdc++.h>

using namespace std;


int main() {	// Writing output to STDOUT

ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int n;
cin>>n;
string s;
cin>>s;
vector <int> v(n);
for(int i=0;i<n;i++)
{
    if(s[i] == '1')
    v[i] = 0;
    else
    v[i] = 1;
}
    int sum = 0; 
    unordered_map<int, int> prevSum; 
    int maxlen = 0; 
    int currlen; 
    for (int i = 0; i < n; i++) { 
        if (v[i] == 1) 
            sum++; 
        else
            sum--; 

        if (sum > 0) { 
            maxlen = i + 1; 
        } 
        else if (sum <= 0) { 
            if (prevSum.find(sum - 1) != prevSum.end()) { 
                currlen = i - prevSum[sum - 1]; 
                maxlen = max(maxlen, currlen); 
            } 
        } 
        if (prevSum.find(sum) == prevSum.end()) 
            prevSum[sum] = i; 

        cout << i << "    " << v[i] << "\t" << sum << "\t" << prevSum[sum] << "\t" << maxlen << "\n";        
    } 
  
 
    
    
return 0;
}
 