#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n,i,j,k,l,r,ans=0,area;
        n=height.size();
        l=0,r=n-1;
        while(l<r){
            area=min(height[l],height[r])*(r-l);
            ans=max(area,ans);
            if(height[l]>height[r])r--;
            else l++;
        }
        return ans;
    }
};


int main()
{
    Solution obj;
    vector<int>nums = {1,8,6,2,5,4,8,3,7};
    int ans=obj.maxArea(nums);
    cout<<ans;
}

