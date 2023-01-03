#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int find_maximum_value(const int h[], int h_size)
{
    int i;
    int max = h[0];

    for(i = 1; i< h_size; i++)
    {
        if(h[i]> max)
        {
            max = h[i];
        }
    }
    return max;
}

int main(void)
{
    int i;
    int num_of_people;
    int* height;
    int maximum_height;

    printf("how many people : ");
    scanf("%d",&num_of_people);

    height = calloc(num_of_people, sizeof(int));
    srand(time(NULL));

    for(i = 0; i<num_of_people; i++)
    {
        height[i] = rand()%80 + 100;
        printf("height[%d] : %d \n",i, height[i]);
    }
    
    maximum_height = find_maximum_value(height, num_of_people);
    printf("maximum height is %d. \r",maximum_height);
    free(height);
    
    return 0;
}//main()
