#include <iostream>
using namespace std;

int pibo(int n)
{
    if(n==0) return 0;
    else if(n==1) return 1;
    else if(n>1)
    {
        n=pibo(n-1)+pibo(n-2);
    }
    return n;
}

int main(void)
{
    int n, result =0;
    cin>>n;
    result=pibo(n);
    cout<<result;    
    return 0;
}
