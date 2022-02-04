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
vector<int> read(int n) { vector<int>v; for(int i=0 ; i<n ; i++){int x; cin >>x; v.pb(x);} return v;}


int n;
int dp[35];
int fib(int n)
{
    if(n==0) return 1;
    if(n==1) return 1;

    if(dp[n]!=-1) return dp[n];
    int ans;
    for(int i=2 ; i<=n ; i++)
    {
        ans = fib(n-1) +fib(n-2);
    }
    return dp[n] = ans;
}


void solve()
{
    memset(dp,-1,sizeof(dp));
  cin >> n;
  int ans = fib(n);
  cout<< ans <<"\n";
}


int main()
{
    fastio;
    solve();
    return 0;
}
