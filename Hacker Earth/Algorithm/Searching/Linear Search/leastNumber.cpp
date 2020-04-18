/* Find Smallest Number Reapted exactly K number of times. */

#include<iostream>

using namespace std;

int main(){
    
    int n;
    cin >> n;

    int *arr;
    arr = new int[n];

    int k;
    cin >> k;


    //taking inputs in the array
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    //sorting the elements of the array
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if( arr[i] > arr[j] ){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int val = arr[0], count = 1;
    int flag = 0;
    for (int i=1; i<n; i++)
    {
        if(arr[i] == val){
            count = count + 1;
        }
        else{
            if ( count == k ){
                cout << val;
                break;
                flag = 1;
            }
            else{
                val = arr[i];
                count = 1;
            }
        }
    }

    if(count == k  && flag == 0){
        cout << val;
    }
    

    return 0;
}