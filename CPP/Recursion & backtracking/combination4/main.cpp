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


     int dp[210][1010];
    int func(int idx,int amount, vector<int> &v)
    {
        if(amount==0) return 1;
        if(idx<0) return 0;
        if(dp[idx][amount]!=-1) return dp[idx][amount];

        int ways=0;
        for(int amount_left=0 ; amount_left<=amount ; amount_left+=v[idx])
        {
            ways += func(idx-1,amount-amount_left,v);
        }
        return dp[idx][amount] = ways;
    }

void solve()
{
     // standard input
     vector<int> v = {1,2,3};

     //memsetting
     memset(dp,-1,sizeof(dp));

     int sol =  func(v.size()-1,4,v);
     cout<< sol <<"\n";
}

int main()
{
    fastio;
    solve();
    return 0;
}
