#include <stdio.h>
#include <stdlib.h>

int sumofdig(int n)
{
    int sum=0;
    while(n!=0)
    {
        sum+= n%10;
        n/=10;
    }
    return sum;
}

int sum=0;
void recsumdig(int n)
{
    if(n==0) return;
    sum+= n%10;
    recsumdig(n/10);
}


int main()
{
    int n;
    scanf("%d",&n);
    printf("sum is %d\n", sumofdig(n));
    recsumdig(n);
    printf("sum using recursion is %d\n", sum);
    return 0;
}
