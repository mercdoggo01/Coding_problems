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
// taking a global vector to store values of sequence
vector<int> a(N);
int dp[N];
// we have to find the maximum longest increasing subsequence
int lis(int idx)
{
  // length will always be one because
  // single element is always increasing subsequence
  int ans=1;

  if(dp[idx]!=-1) return dp[idx];

  for(int i=0 ; i<idx ; i++)
  {
      if(a[idx]>a[i])
      {
          ans = max(ans,lis(i)+1);
      }
  }
  return dp[idx] = ans;
}
// reduces function calls from exponential to approx. n calls
// Time complexity O(N^2)
// for every call there is a loop of size n which runs

void solve()
{
    //setting all values in dp array as -1
     memset(dp,-1,sizeof(dp));
     // standard input
     int n;
     cin >> n;
     for(int i=0 ; i<n ; i++)
     {
         cin >> a[i];
     }
     // for each index checking longest increasing subsequence
     int ans=1;
     for(int i=0 ; i<n ; i++)
     {
         ans = max(ans,lis(i));
     }
     cout<< ans <<"\n";
}

int main()
{
    fastio;
    solve();
    return 0;
}
