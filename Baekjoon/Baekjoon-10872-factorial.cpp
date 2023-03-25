#include <iostream>
using namespace std;

int pac(int n)
{
    if(n==0) return 1;
    if(n>0)
    {
        n=n*pac(n-1);
        return n;   
    }
}

int main(void)
{
    int n;
    int result;
    
    cin>>n;
    result = pac(n);
    cout<<result;
    
    return 0;
}
    
