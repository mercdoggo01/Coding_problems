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



int dp[46];
int n;
    int climbStairs(int n)
    {

        dp[0] = 1;
        dp[1] = 1;
        if(dp[n]!=-1) return dp[n];

       return dp[n]  = climbStairs(n-1)+climbStairs(n-2);
    }


void solve()
{
    memset(dp,-1,sizeof(dp));
    cin >> n;
    int ans = climbStairs(n);
    cout<< ans <<"\n";
}

int main()
{
    fastio;
    solve();
    return 0;
}
