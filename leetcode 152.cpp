//sliding window problem
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int i,j,k,a,b,n,prod,ans,temp=1;
        n=nums.size();
        ans=nums[0];
        for(i=0;i<n;i++){
            if(nums[i]==0){ans=max(0,ans);
            temp=1;
            }
            else{
                temp*=nums[i];
                ans=max(ans,temp);
            }
        }
        reverse(nums.begin(),nums.end());
        temp=1;
        for(i=0;i<n;i++){
            if(nums[i]==0){ans=max(0,ans);
            temp=1;
            }
            else{
                temp*=nums[i];
                ans=max(ans,temp);
            }
        }
        return ans;
    }
};

int main()
{
    Solution obj;
    vector<int>nums = {-2,0,-1};
    int ans=obj.maxProduct(nums);
    cout<<ans;
}

