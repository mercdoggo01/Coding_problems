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


const int N = 2510;
// taking a global vector to store values of sequence
int dp[10010];

int func(int amount, vector<int> &coins)
{
  if(amount==0) return 0;

  if(dp[amount]!=-1) return dp[amount];

  int ans=INT_MAX;
  // taking ans as maximum integer because we need minimum coins
  for(int coin: coins)
  {
    // this part means that min coins needed
   // to reach the amount after using that
   // particular coin (+1 is done as the initial coin)
  // is also taken in consideration
      if(amount-coin>=0)
      ans = min(ans+0ll,func((amount-coin),coins)+1ll);
      // 1 ll  is added to avoid overflow coz INT_MAX+1 surely will do so
      // 0 ll is  added cause min evaluates two data type of same type
  }
  return dp[amount] = ans;
}

int coinChange(int amount,vector<int> &coins)
{
    int ans= func(amount,coins);
    // if not able to make it with any combinations
    // return -1 else return ans
    return ans==INT_MAX ? -1 : ans;
}

void solve()
{
     // standard input
     vector<int> coins = {1,2,5};

     //memsetting
     memset(dp,-1,sizeof(dp));

     int sol =  coinChange(11,coins);
     cout<< sol <<"\n";
}

int main()
{
    fastio;
    solve();
    return 0;
}
