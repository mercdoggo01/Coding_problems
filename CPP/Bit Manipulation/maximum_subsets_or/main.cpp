#include <bits/stdc++.h>
using namespace std;


    int countMaxOrSubsets(vector<int>& nums,int target)
    {
        int cnt=0;
        int n = nums.size();
        int tot_sub = 1<<n;
        for(int i=0 ; i<tot_sub ; i++)
        {
            vector<int> v;
            for(int j=0 ; j<n ; j++)
            {
                if((i&(1<<j))!=0)
                {
                    v.push_back(nums[j]);
                }
            }
            int ans = 0;
            for(auto it : v)
            {
                ans |= it;
            }
            if(ans == target)
            {
                cnt++;
            }
        }
        return cnt;
    }



int main()
{
    vector<int> v = {1,3};
    int orr = 0;
    for(auto it : v)
    {
        orr |= it;
    }
    int x = countMaxOrSubsets(v,orr);
    cout<< x <<"\n";
    return 0;
}
