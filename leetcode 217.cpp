#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int flag=1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        if(n==st.size())return false;
        else return true;
    }
};

int main()
{
    Solution obj;
    vector<int>nums = {1,2,3,1};
    bool ans=obj.containsDuplicate(nums);
    cout<<ans;
}
