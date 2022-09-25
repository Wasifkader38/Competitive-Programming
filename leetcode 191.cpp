#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int res=0;
        while(n){
            if(n%2)res++;
            n/=2;
        }
        return res;
    }
};


int main()
{
    Solution obj;
    uint32_t n=00000000000000000000000000001011;
    int ans=obj.hammingWeight(n);
    cout<<ans;
}
