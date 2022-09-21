#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int getSum(int a, int b)
    {
        int res=0,i=1,l,r,t=a;
      while(b!=0){


            int c = a&b;

            a=a^b;

            b=(unsigned int)c<<1;//negative number left shift korle positive hoye jay tai C++ eta allow kore na
        }
        return a;
    }
};


int main()
{
    Solution obj;
    vector<int>nums = {1,2,-1};
    int ans=obj.getSum(1,-2);
    cout<<ans;
}
