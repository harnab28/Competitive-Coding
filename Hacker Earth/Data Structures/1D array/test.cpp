include<bits/stdc++.h>
using namespace std;
 
int solve (vector<long long> A) {
   // sort(A.begin(),A.end());
    long long int k=pow(2,A.size()-1);
   int n=A.size();
    int charge=0;
  
    for(int i=0;i<n;i++){
       if(A[i]>=k){
           charge=(charge)%(1000000007)+(A[i])%(1000000007);
       }    
    }
    return charge%(1000000007);
}
 
int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i=0; t_i<T; t_i++)
    {
        int N;
        cin >> N;
        cin.ignore();
        if(N>=64){
            cin.ignore(numeric_limits<streamsize>::max(),'\n'); 
            cout<<"0\n";
            continue;
        }
        vector<long long> A(N);
        for(int i_A=0; i_A<N; i_A++)
        {
        	cin >> A[i_A];
        }
 
        int out_;
        out_ = solve(A);
        cout << out_;
        cout << "\n";
    }
}