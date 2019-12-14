
#include <iostream>

using namespace std;

int floor_sqrt(int x)
{
    if (x == 0 || x == 1)  
       return x; 
  
    int start = 1, end = x, ans;    
    while (start <= end)  
    {         
        int mid = (start + end) / 2; 
  
        if (mid*mid == x) 
            return mid; 
  
        if (mid*mid < x)  
        { 
            start = mid + 1; 
            ans = mid; 
        }  
        else 
            end = mid-1;         
    } 
    return ans; 
 
}

int noi(int m,int n)
{
    int sum_n = m;
    int xor_n = n;
    int and_n = floor_sqrt(sum_n-xor_n);
    
    int count = 1;
    int and_i;
    int xor_i;
    i = 0;
    while(i<64)
    {
        i++;
        and_i = and_n&1;
        xor_i = xor_n&1;
        if(xor_i == 0 and and_i == 0)
        {
            continue;
        }
        
        if(xor_i == 0 and and_i == 1)
        {
            continue;
        }
        
        if(xor_i == 1 and and_i == 0)
        {
            count = count*2;
        }
    }
    
    return count;
}

int main()
{
    int m;
    int n;
    
    cin>>m;
    cin>>n;
    cout<<noi(m,n)<<endl;

    return 0;
}
