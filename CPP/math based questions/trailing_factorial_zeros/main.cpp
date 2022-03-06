// Question: https://leetcode.com/problems/factorial-trailing-zeroes/

#include <iostream>
using namespace std;

int trailingZeroes(int n)
    {
        if(n<5) return 0;

        int cnt=0;
        for(int i=5 ; n/i>0 ; i*=5)
        {
            cnt += n/i;
        }
        return cnt;
    }



int main()
{
    int n;
    cin >> n;
    int ans = trailingZeroes(n);
    cout<< ans <<"\n";
    return 0;
}
