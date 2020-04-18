#include<bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    /************************   FREQUENCY OF NUMBERS *****************************/
    int n;
    cin >> n;
    int *f;
    f = new int[n];
    int count = n;
    for (int i = 0; i < count; i++)
    {
        cin >> f[i];
    }
    sort(f, f + n, greater <int> ());


    /************************** NUMBER OF ALBHABETS IN KEYBOARD *******************/
    int k;
    cin >> k;
    int *kf;
    kf = new int[k];
    count = k;
    vector <int> v[1000];
    for (int i = 0; i < count; i++)
    {
        cin >> kf[i];
    }
    sort(kf, kf + k, greater <int> ());



    /*********************SOLUTION*********************************************/


    int j = 0, kl = k;
    long int sum = 0;

    while(1){
        
        for(int i = kl - 1; i >= 0; i--)
        {
            if(j < n)
            {
                v[i].push_back(j);
                j++;
                
                kf[i]--;
                if(kf[i] == 0)
                    kl--;

                
                //calculating sum
                sum += f[j-1]*v[i].size();
                //cout << i << " " << kf[i] << "  " << kl << " " << j << "  " << f[j-1] << "  " << v[i].size() << "  " << sum << "\n";

                if(kl == 0 && j != n)
                {
                    cout << "-1 ";
                    return 0;
                }


                
            }
            else 
                break;
        }

        if(j == n)
            break;

    }

    cout << sum;
    



    return 0;
}