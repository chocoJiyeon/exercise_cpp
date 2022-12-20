#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(void)
{
    int n, m, mm;
    int sum=0;
    int len;
    
    cin>>n;
    
    for(m=1; m<n; m++)
    {
        mm = m;
		sum=sum+m;
        while(mm>0)
        {
        	sum = sum + mm %10;
        	mm = mm/10;
		}
        if(sum==n)
        {
            sum=m;
            break;
        }
        else
            sum=0;
        if(m==n) sum=0;
    }
    cout<<sum;
    return 0;
}
