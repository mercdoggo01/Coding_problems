#include <stdio.h>
#include <stdlib.h>

int add(int a, int b)
{
  for(int i=1;i<=b;i++)
  {
      a++;
  }
  return a;
}


int Add(int x, int y)
{
    if (y == 0)
        return x;
    else
        return Add( x ^ y,(unsigned) (x & y) << 1);
}

int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  int ans,ans1;
 ans = add(a,b);
  ans1 = Add(a,b);
  printf("%d %d",ans,ans1);
    return 0;
}
