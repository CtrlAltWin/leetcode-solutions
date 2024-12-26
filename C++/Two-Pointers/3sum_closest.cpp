class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int ans=nums[0]+nums[1]+nums[2];
        for(int i=0; i<n-2; i++) {
            int x=i+1,y=n-1;
            while(y>x) {
                int sum=nums[i]+nums[x]+nums[y];
                if(abs(sum-target)<abs(ans-target)) {
                    ans=sum;
                }
                if(sum>target) {
                    y--;
                }
                else if(sum<target) {
                    x++;
                }
                else return sum;
            }        
        }
        return ans;
    }
};
