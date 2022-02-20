#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

// Eg.) 153 = 1*1*1 + 5*5*5 + 3*3*3

// iterative solution
bool armstrong(int n)
{
    int x = n;
    int sum=0;
    while(x!=0)
    {
        int mul = x%10;
        sum += mul*mul*mul;
        x /=10;
    }
    if(sum!=n)
    {
        return false;
    }

    return true;
}

int main()
{
    int n;
    scanf("%d",&n);
    if(armstrong(n))
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}
