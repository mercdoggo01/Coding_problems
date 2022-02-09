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


void func(int idx,int target, vector<int>&arr,vector<vector<int>> &ans, vector<int> &ds)
{
  // Base case when itarget reaches zero put the ds in the matrix and abort
      if(target==0)
      {
          ans.push_back(ds);
          return;
      }
  // pick an element
  // same element cannot selected multiple times
  for(int i=idx ; i<arr.size() ; i++)
  {
      // arr[i]==arr[i-1] for duplicates
      // i>idx is for eg. [1,1,1,2,2] if we take 2 as starting element coz
      // otherwise it'll identify as duplicate
      if(i>idx && arr[i]==arr[i-1]) continue;
      if(arr[i]>target) break;

      ds.push_back(arr[i]);
      // move on to next element without changing idx
      func(i+1,target-arr[i],arr,ans,ds);
      ds.pop_back();
  }
}

// Time complexity (2^t * logk) t = number of elements and k = number of recursion calls
// exponential

void solve()
{
    int t;
    cin >> t;
    while(t--)
    {
        // input : size of arr, target
        int n;
        cin >>n;
        int target;
        cin >> target;
        vector<int> arr = read(n);
        // sort it to identify similars
        sort(arr.begin(),arr.end());
        // ds will store all temporary combinations
        vector<int> ds;
        // matrix to store final answer
        vector<vector<int>> ans;
        // executing function
        func(0,target,arr,ans,ds);
        // printing number of combinations
        cout<< ans.size() <<"\n";

        // Printing all the elements in a combination
        for(auto it : ans)
        {
            for(auto it1 : it)
            {
                cout<< it1 <<" ";
            }
            cout<<"\n";
        }
    }
}

int main()
{
    fastio;
    solve();
    return 0;
}
