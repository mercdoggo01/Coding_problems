#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 3.14285714285
#define pb push_back
#define ppb pop_back
#define mpr make_pair
#define ll long long
#define ld long double
#define pr pair
#define endll endl
#define ff first
#define ss second
#define fo(i,a,n) for ( int i = a; i < n; i++ )
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
using namespace std;
#define mod 1000000007

const int N = 1e5 + 10;
int dp[N];
int k;
int h[N];
// in dp based function only use those variables whose states are changing
// i.e here last index(I.e last stone is entered) as it is checked at all
// various stones from stone 1 (i.e index 0) to (n-1) getting min cost
int recursion(int i)
{
   // base case
   if(i==0) return 0;
   // return dp value if its already found
   if(dp[i]!=-1) return dp[i];
   // if element of dp array is not -1 return its value so it avoids
   // unecessary furthur recusrive calls an helps reduction of complexity
  // from O(exponential) to O(n) as n calls are made

   int minn = INT_MAX;

   for(int j=1 ; j<=k ; j++)
   {
    if(i-j>=0)
    {
    minn = min(minn,recursion(i-j) + abs(h[i]-h[i-j]));
    }
   }

   // returning dp of ith index as the answer
   return dp[i] = minn;
}

void solve()
{
 int t;
 //cin >> t;
 t=1;
 while(t--)
 {
   memset(dp,-1,sizeof(dp));
   int n;
   cin >> n >> k;
   fo(i,0,n)
   {
       cin >> h[i];
   }
   // n is decreased once because in array the index is 0 based
   int ans = recursion(n-1);
   cout<< ans <<"\n";
 }
}

int main()
{
    fastio;
    solve();
    return 0;
}
