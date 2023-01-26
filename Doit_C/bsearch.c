#include <stdio.h>
#include <stdlib.h>

int compare_number(const int *a, const int *b)
{
    if(*a < *b)
    {
        return -1;
    }
    else if(*a > *b)
    {
        return 1;
    }
    else return 0;
}

int main(void)
{
    int i;
    int e_num;
    int *n;
    int find_num;
    int *r;

    printf("number of search elements : ");
    scanf("%d",&e_num);
    n = calloc(e_num, sizeof(int));

    printf("enter in ascending order.\n");
    for(i = 0; i< e_num; i++)
    {
        printf("n[%d] : ",i);
        scanf("%d",&n[i]);
    }
    printf("search value : ");
    scanf("%d", &find_num);

    r = bsearch(&find_num, n, e_num, sizeof(int), (int(*)(const void*, const void*))compare_number);
printf("pppp\n");
    if(r == NULL)
    {
        puts("there is no search_value\n");
    }
    else
    {
        printf("%d is in n[%d] \n",find_num,(int)(r - n));
    }
    free(n);

    return 0;
}
