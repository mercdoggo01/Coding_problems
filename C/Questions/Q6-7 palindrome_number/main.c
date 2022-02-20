#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// iterative
bool pal(int n)
{
    int x =n;
    int rev=0;
    while(x!=0)
    {
        rev*=10;
        rev+= x%10;
        x/=10;
    }
    if(rev!=n)
    {
        return false;
    }
    return true;
}

// recursive

int reverse(int num)
{
    int rem;
    static int sum=0;
    if(num!=0){
            rem=num%10;
            sum=sum*10+rem;
            reverse(num/10);
    }
        else
            return sum;
    return sum;
}


int isPalindrome(int num)
{
    if(num == reverse(num))
    {
        return 1;
    }
    return 0;
}



int main()
{
   int n;
   scanf("%d",&n);
   pal(n) ? printf("Yes\n") : printf("No\n");
   isPalindrome(n) ? printf("Yes\n") : printf("No\n");
    return 0;
}
