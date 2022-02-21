#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void swap1(int *a, int *b)
{
    *a =*a+*b;
    *b = *a-*b;
    *a = *a-*b;
}

void swap2(int *a, int *b)
{
     *a = *a^*b;
     *b = *a^*b;
     *a = *a^*b;
}


int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    swap(&a,&b);
    printf("After swap a: %d and  b: %d\n",a,b);

    // after second swap should return to original
    swap1(&a,&b);
    printf("After swap a: %d and  b: %d\n",a,b);

    //after third swap should return to swapped position
     swap2(&a,&b);
    printf("After swap a: %d and  b: %d\n",a,b);

    return 0;
}
