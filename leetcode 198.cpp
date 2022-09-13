#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        int i,j,k,ans,n,r1=0,r2=0,temp;
        n=nums.size();
        for(i=0;i<n;i++){
            temp=max(r1+nums[i],r2);
            r1=r2;
            r2=temp;
        }
        return r2;
    }
};

int main()
{
    Solution obj;
    vector<int>nums = {1,2,3,1};
    int ans=obj.rob(nums);
    cout<<ans;
}
