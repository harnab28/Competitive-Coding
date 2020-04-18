/* Girl-Friend Dates Choice */

#include<string>
#include<iostream>
#include<sstream>

using namespace std;

bool isnumber(string x){
    for(int i=0; i<x.length(); i++)
        if( isdigit(x[i]) == false )
            return false;
    return true;

}

int main(){
    int n;
    cin >> n;
    string chat;
    string x;
    int flag = 0;
    int weigt[31] = {0} ;
    int w;
    while ( n >= 0 ){

        getline(cin , chat);

        
        istringstream ss(chat);      
        
        while( ss >> x){
            
            if(flag == 0){

                flag = 1;

                if(x[0]=='G'){
                    w = 2;
                }
                else{
                    w = 1;
                }
            }

            if( isnumber(x) ){
                int date = stoi(x);
                if(date > 0 && date < 31){
                    weigt[date] = weigt[date] + w;
                }
            }
            
        }
        
        n--;
    } 

    w = 0;
    int pos = 1, count = 0;
    for(int i=1; i<31; i++){
        if(weigt[i] > w){
            w = weigt[i];
        }
    }

    for (int i = 0; i < 31; i++)
    {
        if(weigt[i] == w){
            count++;
            if(i == 19 || i == 20)
                pos = i;
        }       
    }
    
    if(count == 1)
    {
        if(pos == 19 || pos == 20 )
            cout << "Date";
        else{
            cout << "No Date";
        }
    }
    else{
        cout << "No Date";
    }

    return 0;
}