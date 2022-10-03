#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int climbStairs(int n) {
        int dp[50]={0};
        //cout<<dp[2]<<"\n";
        dp[1]=1;
        dp[2]=2;
        for(int i=3;i<47;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};


int main()
{
    Solution obj;
    //uint32_t nums = 00000010100101000001111010011100;
    int nums = 45;
    int ans=obj.climbStairs(nums);
    cout<<ans;
}

