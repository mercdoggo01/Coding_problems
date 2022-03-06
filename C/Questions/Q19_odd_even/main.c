#include <stdio.h>
#include <stdlib.h>

void odd(int n)
{
    printf("Odd check: ");
    if(n&1) printf("Yes\n");
    else printf("No\n");
}

void even(int n)
{
    printf("Even check: ");
    if(n&1) printf("No\n");
    else printf("Yes\n");
}

int main()
{
    int n;
    scanf("%d",&n);
    // odd check
     odd(n);

     // even check
     even(n);
    return 0;
}
