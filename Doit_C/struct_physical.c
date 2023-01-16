#include <stdio.h>

typedef struct{
    char name[10];
    int height;
    float vision;
}physical;

float average_height(physical h[],int n)
{
    static int i;
    float ave = 0;
    for(i = 0; i<n; i++)
    {
        ave += h[i].height;
    }
    return ave/n;
}

float average_vision(physical v[],int n)
{
    static int i;
    float ave_v = 0;
    for(i=0; i<n; i++)
    {
        ave_v += v[i].vision;
    }
    return ave_v/n;
}


int main(void)
{
    static int i;
    physical pp[] = {
        {"aaa", 170, 1.5},
        {"bbb", 155, 1.2},
        {"ccc", 130, 0.5},
        {"ddd", 210, 0.7},
        {"eee", 162, 1.0},
        {"fff", 149, 1.5},
        {"ggg", 183, 0.2},
    };
    int n = sizeof(pp)/sizeof(pp[0]);

    for(i = 0; i<n; i++)
    {
        printf("%d : %s , %d, %.1f \n", i+1, pp[i].name, pp[i].height, pp[i].vision);
    }
    printf("average height : %.1f \n",average_height(pp,n));
    printf("average vision : %.1f \n",average_vision(pp,n));

    return 0;
}
