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
int a[N][4];
int dp[N][4];
int n;
int recur(int day, int flag)
{
    if(day==n) return 0;
    if(dp[day][flag]!=-1) return dp[day][flag];
    int maxx = 0;
    if(flag==0)
    {
        maxx = max(maxx, a[day][1] + recur(day+1,1));
        maxx = max(maxx, a[day][2] + recur(day+1,2));
        maxx = max(maxx, a[day][3] + recur(day+1,3));
    }
    else if(flag==1)
    {
        maxx = max(maxx, a[day][2] + recur(day+1,2));
        maxx = max(maxx, a[day][3] + recur(day+1,3));
    }
    else if(flag==2)
    {
        maxx = max(maxx, a[day][1] + recur(day+1,1));
        maxx = max(maxx, a[day][3] + recur(day+1,3));
    }
    else if(flag==3)
    {
        maxx = max(maxx, a[day][1] + recur(day+1,1));
        maxx = max(maxx, a[day][2] + recur(day+1,2));
    }
    return dp[day][flag] = maxx;
}



void solve()
{
  cin >> n;
   memset(dp,-1,sizeof(dp));
  for(int i=0 ; i<n ;i++)
  {
      for(int j=1 ; j<=3 ; j++)
      {
          cin >> a[i][j];
      }
  }

  int ans = recur(0,0);
  cout<< ans <<"\n";
}

int main()
{
    fastio;
    solve();
    return 0;
}
