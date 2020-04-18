#include <bits/stdc++.h> 
#include <iostream>

using namespace std;
// Driver code 
int main() 
{ 
    std::vector<int> v{ 10, 20, 30, 40, 50 }; 
  
    // Print vector 
    std::cout << "Vector contains :"; 
    for (int i = 0; i < v.size(); i++) 
        std::cout << " " << v[i]; 
    std::cout << "\n"; 
  
    std::vector<int>::iterator upper2; 
  
    // std :: upper_bound 
    auto upper1 = std::upper_bound(v.begin(), v.end(), 0); 
    upper2 = std::upper_bound(v.begin(), v.end(), 45); 

 
    std::cout << "\nupper_bound for element 35 is at position : " 
              << (upper1 - v.begin()); 
    std::cout << "\nupper_bound for element 45 is at position : "
              << (upper2 - v.begin()) << endl; 
  
    return 0; 
}