#include<bits/stdc++.h>
using namespace std;

long long SimilarElementsPairs (vector<int> A,int N) {
    sort(A.begin(), A.end());
    long long ans = 0;
    for (int i = 1; i < N; i++)
    {
        long long c1 = 1, c2 = 1;
        //counting Pairs where Ai = Aj + 1
        while((A[i] == A[i-1]) || (A[i] == A[i-1]+1))  
        {
            c1++;

            if(A[i] == A[i-1])
                c2++;
            
            i++;
        }

        if(c1!=c2 && c1 != 1) // If such pair exists then C1 != c2
        {
            // continious pair creates transtive dependency
            ans += (c1 * (c1 - 1))/2;   //thus adding to answer
        }
    }
    
    return  ans;

}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i_A=0; i_A<N; i_A++)
    {
    	cin >> A[i_A];
    }

    long long out_;
    out_ = SimilarElementsPairs(A,N);
    cout << out_;
}