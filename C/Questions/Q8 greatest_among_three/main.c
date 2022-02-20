#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

// by comparisons
int maxx(int x, int y)
{
    if(x>y) return x;

    return y;
}


void greatest(int a, int b, int c)
{
   printf("%d",maxx(a,maxx(b,c)));
}




int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    greatest(a,b,c);
    return 0;
}
