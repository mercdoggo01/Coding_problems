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

void func(int k, int idx, int n,vector<vector<int>> &ans, vector<int> &ds)
{
    // base case
    if(idx>n && ds.size()<k) return;

    if(ds.size()==k)
    {
        ans.push_back(ds);
        return;
    }


        ds.push_back(idx);
        func(k,idx+1,n,ans,ds);
        ds.pop_back();

        func(k,idx+1,n,ans,ds);
}

void solve()
{
     // standard input
    int n,k;
    cin >> n >> k;
     vector<vector<int>> ans;
     vector<int> ds;
     func(k,1,n,ans,ds);
     cout<< ans.size() <<"\n";
     for(auto it : ans)
     {
         for(auto it1 : it)
         {
             cout<< it1<<" ";
         }
         cout<<"\n";
     }
     cout<<"\n";
}

int main()
{
    fastio;
    solve();
    return 0;
}
