class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n=A.size();
        vector<int>ans(n,0), count1(n+5,0), count2(n+5,0);
        for(int i=0; i<n; i++) {
            count1[A[i]]++;
            count2[B[i]]++;
            for(int j=1; j<n+5; j++) {
                ans[i]+=min(count1[j], count2[j]);
            }
        }
        return ans;
    }
};