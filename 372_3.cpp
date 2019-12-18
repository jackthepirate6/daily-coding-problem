#include<iostream>
#include<bits/stdc++.h>

using namespace::std;

/*
reference -- https://www.geeksforgeeks.org/program-count-digits-integer-3-different-methods/
*/

int nod(int i)
{
    string str;
    str = to_string(i);
    return(str.size());
}

int main()
{
    cout<<nod(4352)<<endl;
}
