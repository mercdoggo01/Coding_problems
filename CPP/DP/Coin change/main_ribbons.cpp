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


const int N = 1e5 + 10;
int dp[N];
int n;
int ribbons(int n, vector<int> &v)
{
       if(n==0) return 0;
       if(dp[n]!=-1) return dp[n];
       int ans=INT_MIN;
       for(int len: v)
       {
           if(n-len>=0)
           {
           ans = max(ans,ribbons(n-len,v)+1);
           }
       }
       return dp[n] = ans;
}



void solve()
{
    memset(dp,-1,sizeof(dp));
    cin >> n;
    vector<int> v = read(3);
    int ans = ribbons(n,v);
    cout<< ans <<"\n";
}

int main()
{
    fastio;
    solve();
    return 0;
}
