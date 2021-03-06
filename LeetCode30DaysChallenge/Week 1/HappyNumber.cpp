#include<bits/stdc++.h>

using namespace std;


class Solution {
public:
    bool isHappy(int n) {
    
    int slow, fast; 
  
    slow = fast = n; 
    do
    { 
        slow = numSquareSum(slow);   
        fast = numSquareSum(numSquareSum(fast)); 
  
    } while (slow != fast); 
  
    return (slow == 1);
        
    }
    
    int numSquareSum(int n){
        
        int sum = 0;
        while(n){
            sum += (n%10) * (n%10);
            n = n/10;
        }
        return sum;
    }
};