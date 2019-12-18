#include <bits/stdc++.h> 
using namespace std; 

/*
reference -- https://www.geeksforgeeks.org/program-count-digits-integer-3-different-methods/
*/
  
int countDigit(long long n) 
{ 
    if (n == 0) 
        return 0; 
    return 1 + countDigit(n / 10); 
} 
  
int main() 
{ 
    long long n = 345289467; 
    cout << "Number of digits :" << countDigit(n); 
    return 0; 
} 
