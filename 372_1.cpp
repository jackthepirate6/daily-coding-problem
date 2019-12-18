#include <iostream>
#include <bits/stdc++.h>

using namespace std;
/*
reference -- https://www.geeksforgeeks.org/program-count-digits-integer-3-different-methods/
*/
int number_of_digits(int i)
{
    return(1+floor(log10(i)));
}

int main()
{
    cout<<number_of_digits(5432)<<endl;
    return 0;
}
