#include <iostream>

using namespace std;


int rec_fac(int n)
{
    if(n==0) return 1;

    return n*rec_fac(n-1);
}

int itr_fac(int n)
{
    int ans=1;
    for(int i=1 ; i<=n ; i++)
    {
        ans *= i;
    }
    return ans;
}

int main()
{
    int n;
    scanf("%d",&n);

    int ans,ans1;
    ans = rec_fac(n);
    ans1 = itr_fac(n);
    printf("%d %d",ans,ans1);
    return 0;
}
