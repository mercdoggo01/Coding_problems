// Questions based on the concept:
// 1.) https://leetcode.com/problems/valid-parentheses/
// 2.) https://practice.geeksforgeeks.org/problems/valid-expression1025/1/


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



unordered_map<char,int>symbol= {{'(',-1},{'{',-2},{'[',-3},{')',1},{'}',2},{']',3}};
bool check_parentheses(string s)
{
    stack<char> st;
    for(auto it : s)
    {
        if(symbol[it]<0)
        {
          st.push(it);
        }
        else
        {
            // if we got closing bracket but no opening we immediately return false;
            // e.g  ){} this is considered false
            if(st.empty()) return false;
            // if topmost opening bracket stored in stack does not match the
            // recent closing bracket return false;
            char ch = st.top();
              st.pop();
            if(symbol[ch]+symbol[it]!=0) return false;
        }
    }
        // if the stack is still not empty after a full iteration of string
        if(st.empty())
        {
            return true;
        }
        else
        {
            return false;
        }


}

void solve()
{
    string s;
    cin >> s;
    check_parentheses(s) ? cout<<"1\n" : cout<<"0\n";
}

int main()
{
    fastio;
    solve();
    return 0;
}
