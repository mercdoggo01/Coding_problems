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


void func(vector<int> &freq, vector<int>&arr, vector<vector<int>> &ans, vector<int> &ds, set<vector<int>> &s)
{
    // base case
  if(ds.size()==arr.size())
  {
      if(!s.count(ds))
      {
      ans.push_back(ds);
      }
       s.insert(ds);
      return;
  }
  // selecting all elements once
  for(int i=0 ; i<arr.size() ; i++)
  {
      // if element no selected
      if(!freq[i])
      {
          // selection of element
          ds.push_back(arr[i]);
          // marking it
          freq[i] = 1;
          // recursive call
          func(freq,arr,ans,ds,s);
          // make unmarked
          freq[i]=0;
          // remove selection
          ds.pop_back();
      }
  }
}
// Time complexity: n!*n (n loops and n! times)
// space complexity O(n) + auxiliary O(n) // stack space

void solve()
{
    int t;
    cin >> t;
    while(t--)
    {
        // input
        int n;
        cin >> n;
        vector<int> arr = read(n);
        vector<int> freq(n,0);
        vector<vector<int>> ans;
        vector<int> ds;
        set<vector<int>> s;
        func(freq,arr,ans,ds,s);

        for(auto it : ans)
        {
            for(auto it1 : it)
            {
                cout<< it1 <<" ";
            }
            cout<<"\n";
        }
        cout<<"\n";
    }
}

int main()
{
    fastio;
    solve();
    return 0;
}
