#include <stdio.h>
#include <stdlib.h>

// iterative

int fib(int n)
{
    if(n<2) return n;

    int first=0;
    int second=1;
    int ans;
    for(int i=2 ; i<n ; i++)
    {
        ans = first+second;
        first = second ;
        second = ans;
    }
    return ans;
}

// recursive

int fib1(int n)
{
    if(n<2) return n;

    return fib(n-1) +fib(n-2);
}

int main()
{
  int n;
  scanf("%d",&n);
  printf("%d\n",fib(n));
  printf("%d",fib1(n));
    return 0;
}
