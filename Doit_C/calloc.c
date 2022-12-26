// calloc(요소 갯수, 자료 사이즈)
// calloc 썼을 때는 사용이 끝나면 free()함수로 메모리 해제해주기

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    int *a;
    int number_of_elements;
    
    printf("요소 갯수 : ");
    scanf("%d",&number_of_elements);

    a = calloc(number_of_elements,sizeof(int));

    for(i = 0; i < number_of_elements; i++)
    {
        printf("요소 값 : ");
        scanf("%d",&a[i]);
    }

    for(i = 0; i < number_of_elements; i++)
    {
        printf("a[%d] = %d\n",i,a[i]);
    }

    free(a);

}//main()
