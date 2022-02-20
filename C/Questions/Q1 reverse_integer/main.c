#include <stdio.h>
#include <stdlib.h>


// iterative solution.
int rev(int n)
{
    // declare a variable with 0 value
    int rev=0;
    // while original number as nothing left
    // repeat this algorithm
    while(n>0)
    {
        // multiply new number each time by 10
        rev*=10;
        // add remainder of original number to it
        rev += n%10;
        // divide the original number
        n/=10;
    }
    // return the number
    return rev;
}


// recursive solution
int x=0;
void recrev(int n1)
{
    if(n1==0) return;

    x *=10;
    x+= n1%10;
    recrev(n1/10);
}

int main()
{
    int n,n1;
    scanf("%d %d",&n,&n1);
    int ans = rev(n);
    recrev(n1);
    printf("Reverse of number  is %d\n",ans);
    printf("Reverse of number using recursion is %d",x);
   return 0;
}
