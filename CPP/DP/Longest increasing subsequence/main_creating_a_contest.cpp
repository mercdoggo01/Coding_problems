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


void solve()
{
    int n;
    cin >> n;
     vector<int> v = read(n);
     vector<int> dp(n,0);
 //   memset(dp,0,sizeof(dp));
    for(int i=1 ; i<n ; i++)
    {
        if(v[i]<=2*v[i-1])
            dp[i] = 1+dp[i-1];
    }
    cout<< *max_element(dp.begin(),dp.end())+1<<"\n";
}

int main()
{
    fastio;
    solve();
    return 0;
}
