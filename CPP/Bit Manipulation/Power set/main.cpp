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

vector<vector<int>> subsets(vector<int>& nums)
{
        // size of nums vector subsets will be 2^n
        int n = nums.size();
        // total number of subsets
        int tot_subsets = 1<<n;
        // creating a vector of vectors to store such
        vector<vector<int>> ans;
        // iterating from 0 to 7 i.e all possible subsets
        for(int i=0 ; i<tot_subsets ; i++)
        {
            // making local vector to store new values each time an iteration occurs
            vector<int> v;
            // using second loop to iterate through elements
            for(int j=0 ; j<n ; j++)
            {
                // if i'th bit of subset is not set then it is added
                if((i&(1<<j))!=0)
                {
                    v.push_back(nums[j]);
                }
            }
            // using push_back to store it in ans
            ans.push_back(v);
        }
        // returning ans
        return ans;

}



void solve()
{
    int n;
    cin >> n;
    vector<int> v = read(n);
    vector<vector<int>> v1 = subsets(v);
    for(auto it : v1)
    {
        for(auto it1 : it)
        {
            cout<< it1 <<" ";
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
