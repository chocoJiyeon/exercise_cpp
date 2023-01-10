#include <stdio.h>

int i,j;
int number = 1000;
int prime_count = 1;
int prime[100];

int main(void)
{
    prime[0] = 2;
    for(i = 3; i < number; i = i+2)
    {
        if(i*i >= number) break;

        for(j = 0; j<prime_count; j++)
        {
            if(i % prime[j] == 0)
            {
                j = 0;
                break;
            }
        }
        if(j)
        {
            prime[prime_count] = i;
            prime_count++;
        }
    }
    
    printf("prime number : ");
    for(i = 0; i< prime_count; i++)
    {
        printf("%d ",prime[i]);
    }
    printf("\r\n");
    return 0;
}
