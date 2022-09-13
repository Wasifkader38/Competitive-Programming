#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int fron[n],bck[n];
        vector<int>ans(n);
        int i,j,k,t;
        fron[0]=nums[0];
        for(i=1;i<n;i++){
            fron[i]=fron[i-1]*nums[i];
        }
        bck[n-1]=nums[n-1];
        for(i=n-2;i>=0;i--){
            bck[i]=bck[i+1]*nums[i];
        }
        ans[0]=bck[1];
        ans[n-1]=fron[n-2];
        for(i=1;i<n-1;i++){
            ans[i]=fron[i-1]*bck[i+1];
        }
        return ans;
    }
};

int main()
{
    Solution obj;
    vector<int>nums = {1,2,3,1};
    bool ans=obj.containsDuplicate(nums);
    cout<<ans;
}
