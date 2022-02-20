#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>


// naive solution
// will make TLE if question constrain greater than 10^3.
bool isPrime(int n)
{
    if(n<2) return false;

    for(int i=2 ; i<n ; i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}


// Better solution still not best
bool isPrime2(int n)
{
    if(n<2) return false;
    for(int i=2 ; i<=sqrt(n) ; i++)
    {
        if(n%i==0) return false;
    }

    return true;
}

// Most efficient refer sieve of Erasthoneses use C++ for
// that shit

int main()
{
    int n;
    scanf("%d",&n);
    isPrime(n)? printf("Yes\n") : printf("No\n");
    isPrime2(n)? printf("Yes\n") : printf("No\n");

    return 0;
}
