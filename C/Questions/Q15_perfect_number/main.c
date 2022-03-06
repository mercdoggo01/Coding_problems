#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPerfect(int n)
{
    // To store sum of divisors
    int sum = 1;

    // Find all divisors and add them
    for ( int i=2; i*i<=n; i++)
    {
        if (n%i==0)
        {
            if(i*i!=n)
                sum = sum + i + n/i;
            else
                sum=sum+i;
        }
    }
     // If sum of divisors is equal to
     // n, then n is a perfect number
     if (sum == n && n != 1)
          return true;

     return false;
}


int main()
{
    int n;
    scanf("%d",&n);

    if(isPerfect(n)) printf("Yes\n");
    else printf("No\n");

    return 0;
}
