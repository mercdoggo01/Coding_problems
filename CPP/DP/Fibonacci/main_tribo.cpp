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


int dp[40];
int n;
int tribo(int n)
{
      if(n==0) return 0;
        if(n==1) return 1;
        if(n==2) return 1;

        if(dp[n]!=-1) return dp[n];
        return dp[n] = tribonacci(n-3) + tribonacci(n-2) + tribonacci(n-1);
}


void solve()
{
    memset(dp,-1,sizeof(dp));
    cin >> n;
    int ans = tribo(n);
    cout<< ans <<"\n";
}

int main()
{
    fastio;
    solve();
    return 0;
}
