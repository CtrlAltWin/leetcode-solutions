class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        using ll=long long ;
        int n=nums.size();
        ll lo=0, hi=n+1;
        while(hi!=lo+1) {
            ll mid=lo+(hi-lo)/2;
            int cnt=0;
            for(auto e: nums) {
                if(e<=mid) cnt++;
            }
            if(cnt>=mid+1) hi=mid;
            else lo=mid;
        }
        return hi;
    }
};